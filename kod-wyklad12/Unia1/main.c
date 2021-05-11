#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    int a;
    float b;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj()
{
    struct Dane temp;
    printf("Jesli chcesz wpisac l. calkowita, wpisz 0, jesli wymierna, wpisz 1 \n");
    scanf("%d",&temp.tp);
    if (temp.tp==0)
    {
        printf("wpisz liczbe calk.\n");
        scanf("%d",&temp.zaw.a);
    }
    else
    {
        printf("wpisz liczbe wymierna\n");
        scanf("%f",&temp.zaw.b);
    }
    return temp;
};

int main()
{
    struct Dane liczba = wczytaj();
    return 0;
}
