#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3]={24,-3,5};
    int *wsk=tab;
    printf("%p\n",&tab);
    printf("%p\n",tab);
    printf("%d\n",&tab==tab);
    printf("%d\n",*tab);
    printf("%p\n",wsk);
    printf("%d\n",*wsk);
    printf("%p\n",&wsk);
    return 0;
}
