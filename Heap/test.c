#include"Heap.h"



void test1() {
	int arr[8] = { 1,2,3,4,5,6,76,7 };


	HP hp;
	HPInit(&hp);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		HPPush(&hp, arr[i]);
	}
	HPPrint(&hp);
	int k = 2;
	while (k--) {
		printf("%d ", HPTop(&hp));
		HPPop(&hp);

	}
}



int main() {
	test1();




	return 0;
}