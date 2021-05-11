#include <stdio.h>
#include <stdlib.h>

struct test{
    int tab[5];
};

int main()
{
    printf("%Iu\n",sizeof(struct test));
    struct test zm;
    printf("%Iu\n",sizeof(zm));
    printf("%p\n",&zm);
    printf("%p\n",&zm.tab);
    return 0;
}
