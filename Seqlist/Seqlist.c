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






//******************************************new-edition*****************************
#include"Seqlist.h"
//must defind a SL struct in main_function
//****************************SeqInit*************************
SL* Seqinit(SL*ps) {
	assert(ps);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
	return ps;
}


//*********************************Seq_destory******************
void Seqdestroy(SL* ps) {
	assert(ps);
	if (ps->arr) {
		free(ps->arr);
		ps->arr = NULL;
		ps->capacity = ps->size = 0;
	}
}


//********************************SeqPushBack************************
void SeqPushBack(SL* ps,int val) {
	assert(ps);
	SeqcapacityCheck(ps);
	ps->arr[ps->size] = val;
	ps->size++;

}

//**********************************SeqPopBack********************************
void SeqlistPopBack(SL* ps) {
	assert(ps);//empty SL CANnot pop
	assert(ps->size>0);
	ps->size--;// Seqlist use size(index) to visit elements,when use this position ,new element will overwrite the predecessor
}


//*********************************print*************************************
void print(SL* ps) {
	assert(ps);
	int i = 0;
	for (i; i < ps->size - 1; i++) {
		printf("%d ", ps->arr[i]);
	}
}
//****************************SeqPushFront*****************************
void SeqPushFront(SL* ps, int val) {
	assert(ps);
	SeqcapacityCheck(ps);
	for (int i = ps->size; i >= 1; i--) {
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = val;


}
//***************************SeqPopFront*********************************
void SeqPopFront(SL* ps) {
	assert(ps);
	for (int i = 0; i < ps->size-1; i++) {
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
//****************************SeqcapacityCheck***************************
void SeqcapacityCheck(SL* ps) {
	if (ps->size == ps->capacity) {//check if capacity equal to size
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//check if Seqlist is used
		Datatype* temp = (Datatype*)realloc(ps->arr, newcapacity * sizeof(Datatype));
		if (NULL == temp) {
			perror("realloc fail");
			exit(-1);
		}
		ps->capacity = newcapacity;
		ps->arr = temp;
	}
}


//************************SeqInsert**********************************
void SeqInsert(SL* ps, int pos, int val) {
	assert(ps);
	assert(pos >= 0);
	assert(pos < ps->size);
	SeqcapacityCheck(ps);//make check operate to be a function
	for (int i = pos; i < ps->size - 1; i++) {
		ps->arr[i + 1] = ps->arr[i];
	}
	//the Fronter overwrite the Latter
	ps->arr[pos] = val;
	ps->size++;


}
//************************SeqErase*************************
void SeqErase(SL* ps,int pos){
	assert(ps);
	assert(pos >= 0);
	assert(pos < ps->size);
	for (int i = pos; i < ps->size - 1; i++) {
		ps->arr[i] = ps->arr[i + 1];
	}
	//the Latter overwrite the Fronter
	ps->size--;
}



//**********************Seqdestory************************
void Seqdestory(SL* ps) {
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
