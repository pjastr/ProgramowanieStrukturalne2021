#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst[15]="informatyka";
    printf("%sq\n",tekst);
    printf("%20sq\n",tekst);
    printf("%-20sq\n",tekst);
    printf("%20.5sq\n",tekst);
    printf("%-20.5sq\n",tekst);
    return 0;
}
