#include <stdio.h>

int suma (int lhs, int rhs)
{
    return lhs+rhs;
}

int main ()
{
    int (*wsk_suma)(int a, int b);
    wsk_suma = suma;
    //printf("%d\n",wsk_suma(3,5));
    printf("%p\n",wsk_suma);
    printf("%p\n",&wsk_suma);
    printf("%p\n",*wsk_suma);
    return 0;
}
