#include <stdio.h>
#include <stdlib.h>

struct test{
    int a;
    int b;
};

int main()
{
    printf("%Iu\n",sizeof(struct test));
    struct test zm={5,2};
    printf("%Iu\n",sizeof(zm));
    printf("%p\n",&zm);
    printf("%p\n",&zm.a);
    printf("%p\n",&zm.b);
    return 0;
}
