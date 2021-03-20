#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=4,y=7;
    printf("%d %d\n",x,y);
    {
        int temp=x;
        x=y;
        y=temp;
    }
    printf("%d %d\n",x,y);
    return 0;
}
