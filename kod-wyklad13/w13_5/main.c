#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element* next;
};

void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element * wsk = Lista;
    if (wsk == NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(wsk!=NULL)
    {
        printf("%d\n",wsk->i);
        wsk=wsk->next;
    }
    printf("---\n");
}

struct element* stworz()
{
    return NULL;
}


struct element* ddk(struct element*Lista, int a)
{
    struct element * wsk ;
    if(Lista==NULL)
    {
        Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
};

int main()
{
    struct element * Lista1 = stworz();
    Lista1=ddk(Lista1,4);
    Lista1=ddk(Lista1,5);
    Lista1=ddk(Lista1,6);
    wyswietlListeBezGlowy(Lista1);
    return 0;
}
