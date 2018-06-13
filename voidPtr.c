#include <stdio.h>

int a=2000;
const int* const p =&a;

int main()
{
    
    
    void**p_=(int**)&p;
    **p_=0000000;
    printf("%d %d %d\n", **(int**)p_,*p,a);
   
   return 0;
}
