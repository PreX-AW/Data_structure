#include"Stack.h"



//Init_stack
void StkInit(Stk*ptr){
    assert(ptr);
    ptr->Stack=(Stk*)malloc(sizeof(Datatype)*4);
    ptr->capacity=0;
    ptr->top=0;
}

//Destory_stack
void StkDestory(Stk*ptr){
    assert(ptr);
    free(ptr->Stack);
    ptr->Stack=NULL;
    ptr->capacity=0;
    ptr->top=0;
}


//Push_stack
void StkPush(Stk*ptr,Datatype val){
assert(ptr);
if(ptr->top==ptr->capacity){
        Datatype*tmp=(Datatype*)realloc(ptr->Stack,sizeof(Datatype)*ptr->capacity*2);
        assert(tmp);
        ptr->Stack=tmp;
        ptr->capacity=ptr->capacity*2;

}
ptr->Stack[ptr->top]=val;
ptr->top++;
}

//Pop_stack
void StkPop(Stk*ptr){
assert(ptr);
assert(ptr->top>0);
ptr->top--;           

}


//Check_stack_Empty
bool StkEmpty(Stk*ptr){
    assert(ptr);
    return ptr->top;

}



//Get_stack_Top
int StkTop(Stk*ptr){
    assert(ptr);
    assert(ptr->top>1);
    return ptr->Stack[ptr->top-1];

}