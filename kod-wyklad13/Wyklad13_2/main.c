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
    // dodanie elementu 4 na liste bez glowy
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=4;
    wsk->next= NULL;
    Lista1=wsk;
    wyswietlListeBezGlowy(Lista1);
    // dodanie elementu -7 na koniec listy1
    struct element* wsk2 = malloc(sizeof(struct element));
    wsk2->i=-7;
    wsk2->next=NULL;
    Lista1->next=wsk2;
    wyswietlListeBezGlowy(Lista1);
    // dodanie elementu 11 na koniec listy1
    struct element* wsk3 = malloc(sizeof(struct element));
    wsk3->i=11;
    wsk3->next=NULL;
    Lista1->next->next=wsk3;
    wyswietlListeBezGlowy(Lista1);
    // dodanie elementu -22 na koniec listy1
    struct element* wsk4 = malloc(sizeof(struct element));
    wsk4->i=-22;
    wsk4->next=NULL;
    Lista1->next->next->next=wsk4;
    wyswietlListeBezGlowy(Lista1);
    return 0;
}
