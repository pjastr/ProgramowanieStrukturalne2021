#include <stdio.h>

int main()
{
    char slowo[5];
    fgets(slowo,5,stdin);
    printf("%s\n",slowo);
    puts(slowo);a
    fputs(slowo,stdout);
    return 0;
}
