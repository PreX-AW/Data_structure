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
Node* BuySLT(int val);
Node* SLTCreat(int numbers);
void print(Node* head);

void print(Node* head);
void SLTBackPush(Node* head);
void SLTBackpop(Node* head);
void SLTFrontPush(Node* head);
void SLTFrontPop(Node* head);
void SLTInsert(Node* head,int value);
void SLTErease(Node* head,int value);
Node* SLTfind(Node*head,int val);