#include <stdio.h>
#include <stdlib.h>

void foo(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("wa: %d %p %p\n",*a,a,&a);
    printf("wb: %d %p %p\n",*b,b,&b);
}

int main()
{
    int x=4,y=7;
    printf("%d %p,%d %p\n",x,&x,y,&y);
    foo(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
