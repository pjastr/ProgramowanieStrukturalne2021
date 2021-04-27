#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    *tab=(int*) malloc(sizeof(int)*3);
    *(tab+1)=(int*) malloc(sizeof(int)*3);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("TAB[%d, %d]= ",i,j);
            scanf("%d",*(tab+i)+j);
            printf("%p \n",*(tab+i)+j);
        }
    }
    free(*(tab+1));
    free(*tab);
    free(tab);
    return 0;
}
