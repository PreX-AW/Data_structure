#define _CRT_SECURE_NO_WARNINGS

#include"Seqlist.h"
int main() {
	SeqList a;
	SeqListInit(&a);
	SeqListwrite(&a, 1);
	SeqListwrite(&a, 2);
	SeqListwrite(&a, 3);
	SeqListwrite(&a, 4);
	SeqListwrite(&a, 5);
	SeqListwrite(&a, 6);
	SeqListwrite(&a, 7);
	SeqListwrite(&a, 8);
	SeqListwrite(&a, 9);
	SeqListwrite(&a, 10);
	SeqListwrite(&a, 0);
	
	

	 SeqListPrint(&a);
	SeqListPushBack(&a, 100);
	 SeqListPushFront(&a, 0);
	 SeqListPopFront(&a);
	 SeqListPopBack(&a);

	// ˳������
	 SeqListFind(&a, 5);
	// ˳�����posλ�ò���x
	 SeqListInsert(&a, 4, 12);
	// ˳���ɾ��posλ�õ�ֵ
	 SeqListErase(&a, 3);
	 SeqListDestroy(&a);
	return 0;
}