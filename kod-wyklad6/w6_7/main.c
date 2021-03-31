#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *b;
    return *a;
}

int main()
{
    int tab[] = {1,2,0,2,9,8,1,-2,3,4};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=2
    int c = b+4; // b=2  , c=6
    int d = foo(&b,&c); // b=2  , c= 6 , d=2
    int e = (wsk+=-1)[4]; // b=2  , c=6  , d= 2 , e=1
    e = (d *= 2) + foo(&c,&b); // b=2  , c=6  , d=4  , e=6
    c = d - (b+=5); // b=7  , c=-3  , d=4  , e=6
    b = *wsk + e; // b=6  , c=-3  , d=4  , e=6
    return 0;
}
