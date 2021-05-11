#include <stdio.h>
#include <stdlib.h>

struct t2{
    int a;
};

int main()
{
    printf("%Iu\n",sizeof(struct t2));
    struct t2 zm={5};
    printf("%Iu\n",sizeof(zm));
    printf("%p\n",&zm);
    printf("%p\n",&zm.a);
    return 0;
}
