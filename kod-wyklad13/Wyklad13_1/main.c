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

void wyswietlListeBezGlowy2(struct element*Lista)
{
    if (Lista == NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(Lista!=NULL)
    {
        printf("%d\n",Lista->i);
        Lista=Lista->next;
    }
    printf("---\n");
}

int main()
{
    //pusta lista bez glowy
    struct element * Lista1 = NULL;
    wyswietlListeBezGlowy2(Lista1);
    // dodanie elementu 4 na liste bez glowy
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=4;
    wsk->next= NULL;
    Lista1=wsk;
    wyswietlListeBezGlowy2(Lista1);
    //puste lista z glowa
    struct element * Lista2 = malloc(sizeof(struct element));
    Lista2->next=NULL;
    return 0;
}
