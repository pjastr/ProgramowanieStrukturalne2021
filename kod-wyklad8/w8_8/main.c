#include <stdio.h>
#include <stdlib.h>

char* foo()
{
    char* temp=malloc(10*sizeof(char));
    temp="abc";
    //temp[1]='\0';
    return temp;
}

int main()
{
    printf("%s\n",foo());
    return 0;
}
