#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int temp=0;
    while(*(napis++))
    {
        temp++;
    }
    return temp;
}

void foo(const char*napis)
{
    napis[2]='T';
}

int main()
{
    char tekst[]="gkhjKJKJJK4r";
    printf("%d\n",dlugosc(tekst));
    foo(tekst);
    printf("%s\n",tekst);
}
