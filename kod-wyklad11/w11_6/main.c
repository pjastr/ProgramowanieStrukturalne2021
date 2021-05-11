#include <stdio.h>
#include <stdlib.h>

#pragma pack ( 1 )
struct Struktura {
    int pole1;
    double pole2;
    char pole3;
};

int main()
{
    struct Struktura zmiennaS =
        { .pole1=60, .pole2=0.3, .pole3='a'};
    printf("%d\n",zmiennaS);
    printf("%p\n",zmiennaS);
    printf("%p\n",&zmiennaS);
    printf("%p\n",&(zmiennaS.pole1));
    printf("%p\n",&zmiennaS.pole2);
    printf("%p\n",&zmiennaS.pole3);
    printf("%Iu\n",sizeof(double));
}
