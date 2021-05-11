#include <stdio.h>
#include <stdlib.h>

enum week{Mon, Tue=-3, Wed, Thur, Fri, Sat, Sun};

int main()
{
    enum week day;
    day = Fri;
    printf("%d",day);
    return 0;
}
