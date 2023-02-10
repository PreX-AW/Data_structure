#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
struct SLT {
	int data;
	struct SLT* next;
};

typedef struct SLT Node;
Node* buySLT(int val);
void SLTInit();


