#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef int Datatype;
typedef struct list {
	struct list* prev;
	Datatype val;
	struct list* next;

}List;

void* ListInit(List* head);

void ListPushback(List* head, Datatype val);
void ListPopback(List* head);
void ListPushFront(List* head, Datatype val);
void ListPopFront(List* head);

List* ListFind(Datatype val);
void ListInsert(List* pos, Datatype val);
void ListErase(List* pos);