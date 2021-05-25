#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element* next;
};

void wyswietlListeZglowa(struct element*Lista)
{
    struct element * wsk = Lista->next;
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
    //puste lista z glowa
    struct element * Lista2 = malloc(sizeof(struct element));
    Lista2->next=malloc(sizeof(struct element));
    Lista2->next->i=4;
    Lista2->next->next=malloc(sizeof(struct element));
    Lista2->next->next->i=-11;
    Lista2->next->next->next=NULL;
    wyswietlListeZglowa(Lista2);
    return 0;
}
