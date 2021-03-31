#include <stdio.h>

int main(void)
{
    short tab[4]={2,-9,4,7};
    short *wsk1, *wsk2;
    wsk1=tab;
    wsk2=&tab[3];
    printf("%Iu\n",wsk2-wsk1);
    printf("%Iu\n",sizeof(short));
    printf("%p\n",wsk1);
    printf("%p\n",wsk2);
    return 0;
}
