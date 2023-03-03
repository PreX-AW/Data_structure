#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


typedef int Datatype;
typedef struct Stack{
    Datatype* Stack;
    int top;
    int capacity;
}Stk;

void StkInit(Stk*ptr);
void StkDestory(Stk*ptr);
void StkPush(Stk*ptr,Datatype val);
void StkPop(Stk*ptr);
bool StkEmpty(Stk*ptr);
int  StkTop(Stk*ptr);







