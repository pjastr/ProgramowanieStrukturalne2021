#include <stdio.h>
#include <stdlib.h>

struct Struktura {
    int pole1;
    double pole2;
    char pole3;
};

int main()
{
    struct Struktura * wsk;
    struct Struktura zm ={20,3.4,'w'};
    wsk=&zm;
    printf("%c\n",(*wsk).pole3);
    printf("%c\n",wsk->pole3);
    return 0;
}
