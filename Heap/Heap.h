#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int HPDatatype;
typedef struct Heap {
	HPDatatype* a;
	int size;
	int capacity;
}HP;


void HPInit(HP* php);
void HPPush(HP* php,HPDatatype val);
void HPPop(HP* php);
void Adjustup(HP* php, int child);
void Adjustdown(HPDatatype*parent, int size);
void HPPrint(HP* php,int size);





