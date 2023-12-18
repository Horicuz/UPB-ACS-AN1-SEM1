#include <stdio.h>
#include <stdlib.h>

struct element
{
    int value;
    struct element *next;
};

typedef struct element ELEMENT;
int main()
{
    ELEMENT *head, *q, *p;
    int n;
    scanf("%d", &n);
    head = NULL;
    p = (ELEMENT *)malloc(sizeof(ELEMENT));
    if(p == NULL)
    {
        printf("Nu s-a putut aloca memorie");
        exit(1);
    }

    scanf("%d", &p->value);
    p->next = NULL;
    head = p;

    printf("CALGUAR");
    for (int i = 2; i <= n; i++)
    {
        q = (ELEMENT *)malloc(sizeof(ELEMENT));
        if(q == NULL)
        {
            printf("Nu s-a putut aloca memorie");
            exit(1);
        }

        scanf("%d", &q->value);
        q->next = NULL;
        p->next = q;
        p = q;
    }
    printf("CALGUAR");
    p = head;
    //eliminate the even numbers
    while (p != NULL)
    {
        if (p->value % 2 == 0)
        {
            if (p == head)
            {
                head = p->next;
                free(p);
                p = head;
            }
            else
            {
                q->next = p->next;
                free(p);
                p = q->next;
            }
        }
        else
        {
            q = p;
            p = p->next;
        }
    }

    printf("CALGUAR");
    //show the values of the new list
    for (p = head; p != NULL; p = p->next)
        printf("%d ", p->value);

    return 0;
}