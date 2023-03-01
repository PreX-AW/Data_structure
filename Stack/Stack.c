#include"Stack.h"

void SKinit(SK*ptr){
    assert(ptr);
    ptr->stack=(Datatype*)malloc(sizeof(Datatype)*DEFAULT);
    ptr->top=0;
    ptr->capacity=DEFAULT;
}



void Check_capacity(SK*ptr){
    assert(ptr);
    int capacity_temp=ptr->capacity==ptr->top? ptr->capacity*2:ptr->capacity;
    ptr->capacity=capacity_temp;


}
void SKpush(SK*ptr,Datatype val){
    assert(ptr);
    Check_capacity(ptr);
    ptr->stack[ptr->top]=val;
    ptr->top++;    
}
void SKpop(SK*ptr){
    assert(ptr);
    assert(ptr->top>0);
    ptr->top--;
}
void SKprint(SK*ptr){
assert(ptr);
int cur=0;
while(cur<ptr->top){
    printf("| %d |",ptr->stack[cur]);
    cur++;
}
    printf("\n");


}

Datatype SKcat_Pop(SK*ptr){
    assert(ptr);
    return ptr->stack[ptr->top];
}

int SKsize(SK*ptr){
    assert(ptr);
    return ptr->top;
}
bool SKempty(SK*ptr){
    return ptr->top;
}
void SKdestroy(SK*ptr){
    free(ptr->stack);
    ptr->stack=NULL;
    ptr->top=0;
    ptr->capacity=DEFAULT;
}