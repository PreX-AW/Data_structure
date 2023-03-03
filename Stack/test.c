#include"Stack.h"

Stk sk;

void test1()
{
StkInit(&sk);
}
void test2(){
   StkPush(&sk,1);
   StkPush(&sk,2);
   StkPush(&sk,3);
   StkPush(&sk,4);
   StkPush(&sk,5);
   StkPush(&sk,6);
   StkPush(&sk,7);
}

void test3(){
   StkPop(&sk);
   StkPop(&sk);
   StkPop(&sk);
   StkPop(&sk);
   StkPop(&sk);
   StkPop(&sk);
   StkPop(&sk);
   StkPop(&sk);
   StkPop(&sk);
}


void test4(){

    printf("%d\n",StkTop(&sk));

    StkEmpty(&sk);
}
int main(){
    test1();
    StkDestory(&sk);



    return 0;
}