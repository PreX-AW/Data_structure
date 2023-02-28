#include"Stack.h"

int main(){
    SK test;
    SK* ptr=&test;
    SKinit(ptr);
    for(int i=0;i<10;i++){
    SKpush(ptr,i);
    SKprint(ptr);
    }
    for(int i=0;i<10;i++)
    {  
        SKpop(ptr);
        SKprint(ptr);
    }
 



    
    return 0;
}