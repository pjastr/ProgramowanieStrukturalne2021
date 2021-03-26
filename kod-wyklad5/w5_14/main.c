#include <stdio.h>
#include <stdlib.h>

int suma(int tab[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=tab[i];
    }
    return temp;
}

int main()
{
    //int n=4;
    int tab1[]={1,2,3,4};
    printf("%d\n",suma(tab1,4));
    return 0;
}
