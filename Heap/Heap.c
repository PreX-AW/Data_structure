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




void Adjustup(HPDatatype*a, int child) {
	assert(a);
	int parent = (child-1) / 2;
	if (a[child] > a[parent]) {
		while (child > 0) {
			if (a[child] > a[parent]) {//this judgement condition is elements compare ,not elements index
				Swap(&a[child], &a[parent]);
				child = parent;
				parent = (child - 1) / 2;

			}
			else break;
		}
	}

	
	return;

}

void Adjustdown(HPDatatype*a,int parent  ,int size) {
	assert(a);
	int child = parent * 2 + 1;
	
	while (parent<size) {
		if (a[child] < a[child + 1]) {
			child++;
		}
		if (child<size && a[child] > a[parent]) {
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else return;
	}






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
	Adjustup(php->a, php->size - 1);//php->a is a HPDatatype pointer ,do not need get the address of a  

}
void HPPop(HP* php) {
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	Adjustdown(php->a,0,php->size-1);


}
void HPPrint(HP* php) {
	for (int i = 0; i < php->size; i++) {
		printf("%d ", php->a[i]);
	}
	printf("\n");

}


bool HPEmpty(HP* php) {
	assert(php);
	return php->size == 0;
}



HPDatatype HPTop(HP* php) {
	assert(php);
	return php->a[0];
}

