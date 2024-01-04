#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node
{
    char nume[21];
    int nr_matricol;
    int cod_materie[3];
    float medie_materie[3];
    struct node *next;
};

typedef struct node NODE;

void citire(NODE **head, int n, NODE **p)
{
    NODE *q;
    printf("Numele studentului: \n");
    fgets((*p)->nume, 21, stdin);
    printf("Numarul matricol: \n");
    scanf("%d", &(*p)->nr_matricol);
    for (int j = 0; j < 3; j++)
    {
        printf("Codul materiei: %d\n", j);
        scanf("%d", &(*p)->cod_materie[j]);
        printf("Media materiei: %d\n", j);
        scanf("%f", &(*p)->medie_materie[j]);
    }
    getchar();
    (*p)->next = NULL;
    *head = *p;
    for (int i = 0; i < n-1; i++)
    {
        q = (NODE *)malloc(sizeof(NODE));
        printf("Numele studentului: \n");
        fgets(q->nume, 21, stdin);
        printf("Numarul matricol: \n");
        scanf("%d", &q->nr_matricol);
        for (int j = 0; j < 3; j++)
        {   
            printf("Codul materiei: \n", j);
            scanf("%d", &q->cod_materie[j]);
            printf("Media materiei: \n", j);
            scanf("%f", &q->medie_materie[j]);
        }
        getchar();
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
    q->nr_matricol = x;
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
    float media_generala = 0;
    float medmax = 0;
    while(p != NULL)
    {
        float media_student = 0;
        for (int i = 0; i < 3; i++)
        {
            media_student += p->medie_materie[i];
        }
        media_student /= 3;
        if (media_student > medmax)
        {
            medmax = media_student;
        }
        printf("Media generala a studentului %s este: %f\n", p->nume, media_student);
        media_generala += media_student;
        p = p->next;
    }
    media_generala /= n;
    printf("Media generala a studentilor este: %f\n", media_generala);

    p = head;   
    while(p != NULL)
    {
        float media_student = 0;
        for (int i = 0; i < 3; i++)
        {
            media_student += p->medie_materie[i];
        }
        media_student /= 3;
        if (media_student == medmax)
        {
            printf("Studentul cu media maxima este: %s\n", p->nume);
            break;
        }
        p = p->next;
    }

    printf("Adaugam acum un student nou la finalul listei\n");
    NODE *q;
    q = (NODE *)malloc(sizeof(NODE));
    printf("Numele studentului: \n");
    fgets(q->nume, 21, stdin);
    printf("Numarul matricol: \n");
    scanf("%d", &q->nr_matricol);
    for (int j = 0; j < 3; j++)
    {
        printf("Codul materiei: %d\n", j);
        scanf("%d", &q->cod_materie[j]);
        printf("Media materiei: %d\n", j);
        scanf("%f", &q->medie_materie[j]);
    
    }
    p = head;
    while(p->next != NULL)
    {
        p = p->next;
    }
    q->next = NULL;
    p->next = q;

    
    printf("Ordonam studentii alfabetic dupa nume\n");
    NODE *aux;
    aux = (NODE *)malloc(sizeof(NODE));
    p = head;
    while(p != NULL)
    {
        NODE *q = p->next;
        while(q != NULL)
        {
            if (strcmp(p->nume, q->nume) > 0)
            {
                strcpy(aux->nume, p->nume);
                strcpy(p->nume, q->nume);
                strcpy(q->nume, aux->nume);
                aux->nr_matricol = p->nr_matricol;
                p->nr_matricol = q->nr_matricol;
                q->nr_matricol = aux->nr_matricol;
                for (int i = 0; i < 3; i++)
                {
                    aux->cod_materie[i] = p->cod_materie[i];
                    p->cod_materie[i] = q->cod_materie[i];
                    q->cod_materie[i] = aux->cod_materie[i];
                    aux->medie_materie[i] = p->medie_materie[i];
                    p->medie_materie[i] = q->medie_materie[i];
                    q->medie_materie[i] = aux->medie_materie[i];
                }

            }
            q = q->next;
        }
        p = p->next;
    }
    printf("Dupa ordonare:\n");
    p = head;
    while(p != NULL)
    {
        printf("%s\n", p->nume);
        p = p->next;
    }
    printf("Eliminam studentul de pe pozitia 3\n");
    elim(&head, n, 3);
    printf("Dupa eliminare:\n");
    p = head;
    while(p != NULL)
    {
        printf("%s\n", p->nume);
        p = p->next;
    }

    return 0;
}
