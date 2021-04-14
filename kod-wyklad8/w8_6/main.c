#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{
    wchar_t buffer[20];
    wscanf(L"%s",buffer); // na linuxie %ls
    wprintf(L"%s",buffer); // na linuxie %ls
    return 0;
}
