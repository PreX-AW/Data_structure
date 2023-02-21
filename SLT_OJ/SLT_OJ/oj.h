#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define SIZE 10

typedef struct SLT{
	int val;
	struct SLT* next;
}Node;

Node* buyNode(int val);
Node* creatSLT(int arr[], int size);
