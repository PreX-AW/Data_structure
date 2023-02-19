// SeqList.h
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;
	int capacity;
}SeqList;

// 对数据的管理:增删查改 
void SeqListInit(SeqList* ps);
void SeqListDestroy(SeqList* ps);

void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);
void SeqListPushFront(SeqList* ps, SLDateType x);
void SeqListPopFront(SeqList* ps);
void SeqListPopBack(SeqList* ps);

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x);
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos);
void SeqListwrite(SeqList* ps, int x);

//****************************************new-edition********************************
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#define Default 4
typedef int Datatype;
typedef struct Seqlist {
	int* arr;
	Datatype size;
	int capacity;
}SL;

SL* Seqinit(SL*ps);
void SeqPushBack(SL* ps,int val);
void SeqPopBack(SL* ps);
void print(SL* ps);

void SeqPushFront(SL* ps, int val);
void SeqPopFront(SL* ps);
void SeqcapacityCheck(SL* ps);
void SeqPushFront(SL* ps, int val);
void SeqPopFront(SL* ps); 
void SeqInsert(SL* ps, int pos,int val);
void SeqErase(SL* ps,int pos);

