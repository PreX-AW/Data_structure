#define _CRT_SECURE_NO_WARNINGS


#include"Seqlist.h"



// 对数据的管理:增删查改 
//**************************************Init********************************
void SeqListInit(SeqList* ps) {
	assert(ps);

	ps->capacity = 4;
	int *Seqptr=(SLDateType*)malloc(sizeof(int) * ps->capacity);
	assert(Seqptr);
	ps->a = Seqptr;
	ps->size = 0;
}

//**************************************Destory***************************
void SeqListDestroy(SeqList* ps) {
	assert(ps);

	assert(ps->a);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;



}

void SeqListPrint(SeqList* ps) {
	assert(ps);

	int i = 0;
	
	for (i = 0; i < ps->size; i++ ) {
		printf("%d ", ps->a[i]);
	}

}



void SeqListPushBack(SeqList* ps, SLDateType x) {//////////////////////////
	assert(ps);

	if (ps->size == ps->capacity) {
		ps->capacity *= 2;
		SLDateType Seqptr = (SLDateType*)realloc(ps->a, ps->capacity * sizeof(SLDateType));
		assert(Seqptr);
		ps->a = Seqptr;
		


	}

	
	ps->a[ps->size] = x;
	ps->size++;

}
void SeqListPushFront(SeqList* ps, SLDateType x) {////////////////////////////////////
	assert(ps);
	int i = 0;
	if (ps->size+1 == ps->capacity) {
		ps->capacity *= 2;
		SLDateType Seqptr = (SLDateType*)realloc(ps->a, ps->capacity * sizeof(SLDateType));
		assert(Seqptr);
		ps->a = Seqptr;
		

	}
	for (i = ps->size; i >= 0; i--) {
		ps->a[i+ 1] = ps->a[i];
	}
	ps->size++;

	
	ps->a[0] = x;


}
void SeqListPopFront(SeqList* ps) {
	assert(ps);

	int i = 0;
	for (i = 0; i < ps->size-1; i++) {
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
	SLDateType* Seqptr = (SLDateType*)realloc(ps->a, sizeof(int) * ps->size);
	assert(Seqptr);
	ps->a = Seqptr;
	
}
void SeqListPopBack(SeqList* ps) {
	assert(ps);

	ps->size--;
	SLDateType* Seqptr = (SLDateType*)realloc(ps->a, sizeof(int) * ps->size);
	assert(Seqptr);
	ps->a = Seqptr;
	


}

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x) {
	assert(ps);

	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (ps->a[i] == x)return i;
	}



}
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x) {
	assert(ps);

	int i = pos;
	if (ps->size+1 == ps->capacity) {
		ps->capacity *= 2;
		SLDateType* Seqptr = realloc(ps->a, sizeof(int) * ps->capacity);
		assert(Seqptr);
		ps->a = Seqptr;
	}	
	for (i = ps->size; i >= pos; i--) {
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[pos] = x;
	ps->size++;


}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos) {/////////////////////////
	assert(ps);
	int i = pos;
	for (i = pos; i <ps->size; i++) {
		ps->a[i] = ps->a[i+1];
	}
	ps->size--;


}

void SeqListwrite(SeqList* ps, int x) {
	assert(ps);
	if (ps->size == ps->capacity) {
		ps->capacity *= 2;
		SLDateType* Seqptr = realloc(ps->a, sizeof(SLDateType) * ps->capacity);
		assert(Seqptr);
		ps->a = Seqptr;
	}
	ps->a[ps->size] = x;
	ps->size++;



}