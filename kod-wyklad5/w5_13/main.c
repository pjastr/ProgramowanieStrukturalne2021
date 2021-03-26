#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 3

int main()
{
    int tab[ROZMIAR] = {4,0,-2};
    //printf("%i",tab==&tab[0]);
    printf("%p\n",tab);
    printf("%p\n",&tab);
    printf("%p\n",&tab[0]);
    printf("%d\n",*tab);
    printf("%d\n",tab[0]);
    printf("%p\n",&tab[1]);
    printf("%p\n",tab+1);
    printf("%d\n",tab[1]);
    printf("%d\n",*(tab+1));
    printf("%d\n",*tab+1);
    printf("%p\n",&tab[2]);
    printf("%p\n",tab+2);
    printf("%d\n",tab[2]);
    printf("%d\n",*(tab+2));
    printf("%d\n",*tab+2);
    return 0;
}
