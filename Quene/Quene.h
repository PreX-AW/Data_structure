#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef int Datetype;


typedef struct Quene
{
   Datetype* arr;
   
    /* data */
}QL;

void QueneInit();
void QueneDestory();
void QuenePush();
void QuenePop();
