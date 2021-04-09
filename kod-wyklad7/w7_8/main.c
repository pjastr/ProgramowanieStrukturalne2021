#include <stdio.h>

int main()
{
    char slowo[5];
    gets_s(slowo,5*sizeof(char));
    printf("%s\n",slowo);
    puts(slowo);
    return 0;
}
