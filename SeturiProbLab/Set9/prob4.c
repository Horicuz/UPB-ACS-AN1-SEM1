#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node
{
    int nr;
    struct node *next;
};

typedef struct node NODE;

void citire(NODE **head, int n, NODE **p)
{
    NODE *q;
    scanf("%d", &(*p)->nr);
    (*p)->next = NULL;
    *head = *p;
    for (int i = 0; i < n-1; i++)
    {
        q = (NODE *)malloc(sizeof(NODE));
        scanf("%d", &q->nr);
        q->next = NULL;
        (*p)->next = q;
        *p = q;
    }
    printf("Citire reusita!\n");
}

void elim(NODE **head, int n, int i)
{
    //eliminare nod de pe pozitia i
    NODE *p = *head;
    NODE *q;
    if (i == 1)
    {
        *head = p->next;
        free(p);
    }
    else
    {
        for (int j = 1;  j < i - 1; j++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        free(q);
    }
    printf("Eliminare reusita!\n");
}

void inserare(NODE **head, int n, int i, int x)
{
    //inserare nod pe pozitia i
    NODE *p = *head;
    NODE *q;
    q = (NODE *)malloc(sizeof(NODE));
    q->nr = x;
    if (i == 1)
    {
        q->next = *head;
        *head = q;
    }
    else
    {
        for (int j = 1; j < i - 1; j++)
        {
            p = p->next;
        }
        q->next = p->next;
        p->next = q;
    }
    printf("Inserare reusita!\n");
}
int main()
{

    NODE *head = NULL;
    NODE *p;
    p = (NODE *)malloc(sizeof(NODE));

    int n;
    scanf("%d", &n);

    citire(&head, n, &p);
    p = head->next;
    int j = 2;
    while (p != NULL)
    {
        if (p->nr == 6)
        {

            elim(&head, n, j);
            n--;
            break;
        }
        p = p->next;
        j++;
    }
    
    inserare(&head, n, 3, 69);
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->nr);
        p = p->next;
    }
    return 0;
}
