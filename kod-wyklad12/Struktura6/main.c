#include <stdio.h>
#include <stdlib.h>

struct test{
    char a;
    int b;
};

int main()
{
    printf("%Iu\n",sizeof(struct test));
    struct test zm={'w',23};
    printf("%Iu\n",sizeof(zm));
    printf("%p\n",&zm);
    printf("%p\n",&zm.a);
    printf("%p\n",&zm.b);
    return 0;
}
