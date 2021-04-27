#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    *tab=(int*) malloc(sizeof(int)*3);
    *(tab+1)=(int*) malloc(sizeof(int)*3);
    free(*(tab+1));
    free(*tab);

    free(tab);
    return 0;
}
