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
Node* SLTInit();
void print(Node* head);

void print(Node* head);
Node* SLTBackPush(Node* head);
Node* SLTBackpop(Node* head);
Node* SLTFrontPush(Node* head);
Node* SLTFrontPop(Node* head);
Node* SLTInsert(Node* head,int value);
Node* SLTErease(Node* head,int value);
