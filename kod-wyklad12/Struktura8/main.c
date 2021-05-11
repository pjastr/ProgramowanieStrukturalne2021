#include <stdio.h>
#include <stdlib.h>

struct test{
    double a;
    char b;
    int c;
};

int main()
{
    printf("%Iu\n",sizeof(struct test));
    struct test zm={11.2,'w',23};
    printf("%Iu\n",sizeof(zm));
    printf("%p\n",&zm);
    printf("%p\n",&zm.a);
    printf("%p\n",&zm.b);
    printf("%p\n",&zm.c);
    return 0;
}
