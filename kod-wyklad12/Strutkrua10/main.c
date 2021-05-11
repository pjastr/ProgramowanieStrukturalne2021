#include <stdio.h>
#include <stdlib.h>

struct test{
    char a;
    char b;
    double c;
    int d;
};

int main()
{
    printf("%Iu\n",sizeof(struct test));
    struct test zm={'w','#',11.2,23};
    printf("%Iu\n",sizeof(zm));
    printf("%p\n",&zm);
    printf("%p\n",&zm.a);
    printf("%p\n",&zm.b);
    printf("%p\n",&zm.c);
    printf("%p\n",&zm.d);
    return 0;
}
