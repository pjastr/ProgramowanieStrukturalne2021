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
    int b = *(wsk+=4); //b=
    int c = b+4; // b=  , c=
    int d = foo(&b,&c); // b=  , c=  , d=
    int e = (wsk+=-1)[4]; // b=  , c=  , d=  , e=
    e = (d *= 2) + foo(&c,&b); // b=  , c=  , d=  , e=
    c = d - (b+=5); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    return 0;
}
