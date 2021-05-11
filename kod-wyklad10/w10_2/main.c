#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3];
    tab[ 1 ][ 2 ] = 5;
    *(*(tab+1)+2)=7;
    return 0;
}
