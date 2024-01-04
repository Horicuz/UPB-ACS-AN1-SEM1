#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node
{
    int id_produs;
    int cant_produs;
    float pret_produs;
    struct node *next;
};

typedef struct node NODE;

void citire(NODE **head, int n, NODE **p)
{
    NODE *q;
    printf("Id produs: \n");
    scanf("%d", &(*p)->id_produs);
    printf("Cantitate produs: \n");
    scanf("%d", &(*p)->cant_produs);
    printf("Pret produs: \n");
    scanf("%f", &(*p)->pret_produs);
    getchar();
    (*p)->next = NULL;
    *head = *p;
    for (int i = 0; i < n - 1; i++)
    {
        q = (NODE *)malloc(sizeof(NODE));
        printf("Id produs: \n");
        scanf("%d", &q->id_produs);
        printf("Cantitate produs: \n");
        scanf("%d", &q->cant_produs);
        printf("Pret produs: \n");
        scanf("%f", &q->pret_produs);
        getchar();
        q->next = NULL;
        (*p)->next = q;
        *p = q;
    }
    printf("Citire reusita!\n");
}

void elim(NODE **head, int n, int i)
{
    // eliminare nod de pe pozitia i
    NODE *p = *head;
    NODE *q;
    if (i == 1)
    {
        *head = p->next;
        free(p);
    }
    else
    {
        for (int j = 1; j < i - 1; j++)
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
    // inserare nod pe pozitia i
    NODE *p = *head;
    NODE *q;
    q = (NODE *)malloc(sizeof(NODE));
    q->id_produs = x;
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
    getchar();
    citire(&head, n, &p);
    p = head;

    // implementam un cos de cumparaturi
    NODE *head2 = NULL;
    NODE *q2;
    q2 = (NODE *)malloc(sizeof(NODE));

    // aduagarea produselor in cos
    int id;
    int cant_produs1;
    int ok = 1;
    int okcos = 1;
    do
    {
        printf("Ce id are produsul pe care doriti sa il adaugati in cos?\n");
        scanf("%d", &id);
        printf("Ce cantitate doriti sa adaugati in cos?\n");
        scanf("%d", &cant_produs1);
        while (p != NULL)
        {
            NODE *p2;
            p2 = (NODE *)malloc(sizeof(NODE));
            if (p->id_produs == id)
            {
                if (p->cant_produs >= cant_produs1)
                {
                    p->cant_produs = p->cant_produs - cant_produs1;
                    p2->id_produs = id;
                    p2->cant_produs = cant_produs1;
                    p2->pret_produs = p->pret_produs;
                    p2->next = NULL;
                    if (okcos == 1)
                    {
                        head2 = p2;
                        q2 = p2;
                        okcos = 0;
                    }
                    else
                    {
                        q2->next = p2;
                        q2 = p2;
                    }
                    break;
                }
                else
                {
                    printf("Nu avem atatea produse in stoc!\n");
                    break;
                }
            }
            p = p->next;
        }
        printf("Doriti sa mai adaugati un produs in cos? (1/0)\n");
        scanf("%d", &ok);
    } while (ok);
    //afisati cosul de cumparaturi
    q2 = head2;
    printf("Cosul de cumparaturi este:\n");
    while (q2 != NULL)
    {
        printf("Id produs: %d\n", q2->id_produs);
        printf("Cantitate produs: %d\n", q2->cant_produs);
        printf("Pret produs: %f\n", q2->pret_produs);
        q2 = q2->next;
    }
    // sa eliminam un produs sau sa schimbam cantitatea dintr-un produs;

    //afisati pretul total al cosului de cumparaturi
    q2 = head2;
    float pret_total = 0;
    while (q2 != NULL)
    {
        pret_total = pret_total + q2->pret_produs * q2->cant_produs;
        q2 = q2->next;
    }
    printf("Pretul total al cosului de cumparaturi este: %f\n", pret_total);
    return 0;
}
