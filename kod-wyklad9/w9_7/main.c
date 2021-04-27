#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[3][3] = {{2,3,1},{-3,2,6},{0,9,1}};
    printf("%p\n",tablica);
    printf("%p\n",tablica[2]);
    return 0;
}
