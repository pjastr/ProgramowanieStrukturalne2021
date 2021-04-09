#include <stdio.h>

int main()
{
    char tekst1[]="ert\0dsjdh";
    char tekst2[]= {'a','b','c','\0','@'};
    char tekst3[]="xyz";
    printf("%p\n",tekst1);
    printf("%p\n",tekst2);
    printf("%p\n",tekst3);
    printf("%Iu\n",sizeof(char));
    puts(tekst1);
    puts(tekst2);
    puts(tekst3);
    return 0;
}
