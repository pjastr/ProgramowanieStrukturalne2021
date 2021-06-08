#include <stdio.h>
#include <stdlib.h>

int fun (int (*f1)(int),int (*f2)(int),int n)
{
    return 5;
}

int foo(int a)
{
    return a+5;
}

int main()
{
    int wynik = fun(foo,foo,6);
    printf("%d\n",wynik);
    return 0;
}
