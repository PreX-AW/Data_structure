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
void HPPush(HPDatatype*a,int child);
void HPPop(HP* php);
void HPPrint(HP* php);
void HPEmtpy(HP* php);




