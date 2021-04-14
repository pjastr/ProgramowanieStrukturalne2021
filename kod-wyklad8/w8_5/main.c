#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{
    printf("%Iu\n",sizeof(wchar_t));
    wchar_t buffer[20];
    fgetws(buffer,20,stdin);
    fputws(buffer,stdout);
    return 0;
}
