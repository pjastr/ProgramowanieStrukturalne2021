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

int main()
{
    //pusta lista bez glowy
    struct element * Lista1 = NULL;
    wyswietlListeBezGlowy(Lista1);
    Lista1=malloc(sizeof(struct element));
    Lista1->i=4;
    Lista1->next=malloc(sizeof(struct element));
    Lista1->next->i=-7;
    Lista1->next->next=malloc(sizeof(struct element));
    Lista1->next->next->i=11;
    Lista1->next->next->next=malloc(sizeof(struct element));
    Lista1->next->next->next->i=-22;
    Lista1->next->next->next->next=NULL;
    wyswietlListeBezGlowy(Lista1);
    return 0;
}
