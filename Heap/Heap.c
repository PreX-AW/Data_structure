#include"Heap.h"




void HPInit(HP* php) {
	assert(php);
	php->capacity = 0;
	php->size = 0;
	php->a = NULL;


}





void Swap(HPDatatype* child, HPDatatype* parent) {
	HPDatatype temp = *child;
	*child = *parent;
	*parent = temp;
}




void Adjustup(HP* php, int child) {
	assert(php);
	int parent = (child-1) / 2;
	if (php->a[child] > php->a[parent]) {
		while (child > 0) {
			if (php->a[child] > php->a[parent]) {//this judgement condition is elements compare ,not elements index
				Swap(&php->a[child], &php->a[parent]);
				child = parent;
				parent = (child - 1) / 2;

			}
			else break;
		}
	}

	
	return;

}

void Adjustdown(HPDatatype*parent, int size) {
	assert(parent);
	





}




void HPPush(HP* php,HPDatatype val) {
	assert(php);
	if (php->size == php->capacity) {
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		php->a = (HPDatatype*)realloc(php->a,sizeof(HPDatatype) * newcapacity);
		if (NULL == php->a) {
			perror("realloc fail");
			exit(-1);
		}
		php->capacity = newcapacity;

	}
	php->a[php->size] = val;
	php->size++;
	Adjustup(php, php->size - 1);

}
void HPPop(HP* php) {
	assert(php);
	assert(php->size > 0);
	Swap(php->a[0], php->a[php->size - 1]);
	php->size--;
	Adjustdown(&php->a[0], php->size);






}
void HPPrint(HP* php, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", php->a[i]);
	}
	printf("\n");




}


