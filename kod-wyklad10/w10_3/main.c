#include <stdio.h>
#include <stdlib.h>

void wyswietl(int n, int m, int**tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d, %p\n",i,j,*(*(tab+i)+j),*(tab+i)+j);
        }
        printf("--\n");
    }
    printf("@@\n");
}

int main()
{
    int**tabD = malloc(4*sizeof(int*));
    for(int i=0;i<4;i++)  // for(int i=0;i<4;i++)
    {
        *(tabD+i) = malloc(5*sizeof(int)); // tabD[i] = malloc(5*sizeof(int));
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            *(*(tabD+i)+j)=i+j;
        }
    }
    for(int i=0;i<4;i++)
    {
        printf("%d %p %p\n",i,tabD+i,*(tabD+i));
    }
    wyswietl(4,5,tabD);
    //zamiana miejscami wierszy o indeksach 1 i 3
    int* wsk_pom;
    wsk_pom = *(tabD +1); // wsk_pom = tabD[0];
    *(tabD + 1) = *(tabD + 3); // tabD[0] = tabD[3];
    *(tabD + 3) = wsk_pom; // tabD[3] = wsk_pom;
    wyswietl(4,5,tabD);

    return 0;
}
