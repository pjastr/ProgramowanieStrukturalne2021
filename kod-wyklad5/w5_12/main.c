#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int m = 8;
    int tabb1[5]; // ok
    int tabb2[4]; // ok
    int tabb3[sizeof(int)+1]; // ok
    //int tabb4[-2]; // nie, bo <0
    int tabb5[0]; // ???
    //int tabb6[6.5]; // nie, boe nie ca³k.
    int tabb7[(int)(3.4)]; // ???
    int tabb8[n]; // brak dla C90
    int tabb9[m]; // Brak dla C()
    return 0;
}
