#include <stdio.h>
#include <stdlib.h>

struct test{
    double w;
    int a;
    int b;
    int c;
    char d;
    char e;
    char f;
    char g;
    char h;
};

int main()
{
    printf("%Iu\n",sizeof(struct test));
    struct test zm;
    printf("%Iu\n",sizeof(zm));
    printf("%p\n",&zm);
    printf("%p\n",&zm.w);
    printf("%p\n",&zm.a);
    printf("%p\n",&zm.b);
    printf("%p\n",&zm.c);
    printf("%p\n",&zm.d);
    printf("%p\n",&zm.e);
    printf("%p\n",&zm.f);
    printf("%p\n",&zm.g);
    printf("%p\n",&zm.h);
    return 0;
}
