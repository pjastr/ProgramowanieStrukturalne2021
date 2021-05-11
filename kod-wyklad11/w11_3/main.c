#include <stdio.h>
#include <stdlib.h>

struct moja_struct {
    int a;
    char b;
} moja;

int main()
{
    printf("%d\n",moja.a);
    moja.a=6;
    printf("%d\n",moja.a);
    struct moja_struct zm;
    zm.a=52;
    return 0;
}
