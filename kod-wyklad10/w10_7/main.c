#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ***tab = (int***) malloc(sizeof(int**)*2);
    tab[0]=(int**) malloc(sizeof(int*)*3);
    tab[1]=(int**) malloc(sizeof(int*)*3);
    tab[0][0]=(int*) malloc(sizeof(int)*4);
    tab[0][1]=(int*) malloc(sizeof(int)*4);
    tab[0][2]=(int*) malloc(sizeof(int)*4);
    tab[1][0]=(int*) malloc(sizeof(int)*4);
    tab[1][1]=(int*) malloc(sizeof(int)*4);
    tab[1][2]=(int*) malloc(sizeof(int)*4);
    return 0;
}
