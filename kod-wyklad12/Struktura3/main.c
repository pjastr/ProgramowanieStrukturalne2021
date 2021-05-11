#include <stdio.h>
#include <stdlib.h>

struct t3{
    char a;
};

int main()
{
    printf("%Iu\n",sizeof(struct t3));
    struct t3 zm={'U'};
    printf("%Iu\n",sizeof(zm));
    printf("%p\n",&zm);
    printf("%p\n",&zm.a);
    return 0;
}
