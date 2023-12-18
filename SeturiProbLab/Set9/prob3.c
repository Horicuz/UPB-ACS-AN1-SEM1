#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char cuv[15];
    struct node *next;
};

typedef struct node NODE;


int main()
{
    NODE *head = NULL;
    NODE *p, *q;
    int n;
    scanf("%d", &n);
    getchar();
    p = (NODE*)malloc(sizeof(NODE));
    fgets(p->cuv, 15, stdin);
    
    p->next = NULL;
    head = p;
    for(int i=2;i<=n;i++)
    {
        q = (NODE*)malloc(sizeof(NODE));
        fgets(q->cuv, 15, stdin);
        q->next = NULL;
        p->next = q;
        p = q;
    }
    p = head;
    char fraza[1000];
    while(p!=NULL)
    {   
        
        puts(p->cuv);
        printf("%d\n", p->next);
        printf("\n");
        strcat(fraza, p->cuv);
        strcat(fraza, " ");
        p = p->next;
    }
    puts(fraza);
    return 0;

}