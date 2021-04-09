#include <stdio.h>

int main()
{
    char * slowo=malloc(10*sizeof(char));
    scanf("%s",slowo);
    printf("%s\n",slowo);
    return 0;
}
