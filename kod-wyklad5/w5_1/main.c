#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *wsk=malloc(4*sizeof(float));
    //int*wsk2;
    //int a=5;
    //wsk2=&a;
    free(wsk);
    return 0;
}
