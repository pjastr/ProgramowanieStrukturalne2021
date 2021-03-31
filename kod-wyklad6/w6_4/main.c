#include <stdio.h>

int main(void)
{
    int tab[5]={3,4,-3,4,7};
    int *wsk1;
    wsk1=tab;
    printf("%p %d\n",wsk1,*wsk1);
    wsk1--;
    printf("%p %d\n",wsk1,*wsk1);
    return 0;
}
