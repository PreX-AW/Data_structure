
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define DEFAULT 10
typedef int Datatype;

struct Stack
{
    Datatype*stack;
    int capacity;
    /* data */
    int top;
};

typedef struct Stack SK;
void SKinit(SK*ptr);
void SKpush(SK*ptr,Datatype val);
 
void Check_capacity(SK*ptr);
void SKpop(SK*ptr);
void SKprint(SK*ptr);