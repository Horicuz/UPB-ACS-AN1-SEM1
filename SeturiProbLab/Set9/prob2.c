#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persoana
{

    int varsta;
    char nume[20];
    struct persoana *urm;

};


int main()
{
    int nr;
    struct persoana *cap_lista, *p, *q;
    scanf("%d", &nr);
    p = (struct persoana *)malloc(sizeof(struct persoana));
    printf("Introduceti varsat si numele persoanei\n");

    scanf("%d", &p->varsta);
    getchar();
    fgets(p->nume, 20, stdin);
    p->urm = NULL;
    cap_lista = p;

    for(int i = 2; i<=nr; i++)
    {
        q = (struct persoana *)malloc(sizeof(struct persoana));
        scanf("%d", &q->varsta);
        getchar();
        fgets(q->nume, 20, stdin);
        q->urm = NULL;
        p->urm = q;
        p = q;

    }

    p = cap_lista;
    for(int  i=1; i<=nr; i++)
    {
        printf("%s\n", p->nume);
        if(strcmp(p->nume, "George\n") == 0 && p->varsta == 19)
        {
            printf("L-am gasit pe george de 19 ani\n");
            if((p->urm)->varsta < p->varsta)
                printf("%s are varsta mai mica\n", (p->urm)->nume);
            break;
        }
        p = p->urm;
    }

    for(p=cap_lista;p!=NULL;p=q)
    {
        q = p->urm;
        free(p);

    }
    return 0;

}
