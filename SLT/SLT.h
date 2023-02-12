#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
struct SLT {
	int data;
	struct SLT* next;
};

typedef struct SLT Node;
Node* BuySLT(int val);
Node* SLTCreat(int numbers);

void print(Node* head);
void SLTBackPush(Node** phead);
void SLTBackpop(Node** Phead);
void SLTFrontPush(Node** Phead);
void SLTFrontPop(Node** phead);
void SLTInsert_After(Node* head,int value);
void SLTErease_After(Node* head,int value);
Node* SLTfind_After(Node*head,int val);

void SLTDestory(Node** phead);