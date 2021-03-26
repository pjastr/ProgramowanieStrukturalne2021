#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab1[5];
    tab1[2]=4;
    const int tab2[6]={1,2,-3,4,5,-9};
    printf("%d\n",tab2[0]);
    return 0;
}
