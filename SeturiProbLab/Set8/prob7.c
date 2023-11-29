#include <stdio.h>
#include <stdlib.h>

typedef struct autor{

    char nume[20];
    char prenume[20];
    char gen;
}Autor;

typedef struct carte{

    char titlu[40];
    int an;
    Autor autor;
}carte;

void cautare_carte(Autor scriitor, carte biblioteca[], int n)
{   
    int ok = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(scriitor.nume,biblioteca[i].autor.nume)==0 && strcmp(scriitor.prenume,biblioteca[i].autor.prenume)==0)
        {
            printf("Titlu: %s\n",biblioteca[i].titlu);
            printf("Anul aparitiei: %d\n",biblioteca[i].an);
            if(biblioteca[i].autor.gen == 'D')
                printf("Genul: Dramatic\n");
            else if(biblioteca[i].autor.gen == 'C')
                printf("Genul: Comedie\n");
            else if(biblioteca[i].autor.gen == 'T')
                printf("Genul: Teatru\n");
            printf("\n");
            ok = 1;
        }
    }
    if(ok == 0)
        printf("Nu exista carti scrise de acest autor!\n");
}

void frecv_autor_max(Autor scriitor, carte biblioteca[], int n, int *frecv_autor)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(scriitor.nume,biblioteca[i].autor.nume)==0 && strcmp(scriitor.prenume,biblioteca[i].autor.prenume)==0)
        {
            frecv_autor[i]++;
        }
    }
    int frecv_max = 0;
    for(int i = 0;i<n;i++)
    {
        if(frecv_autor[i]>frecv_max)
            frecv_max = frecv_autor[i];
    }

    for(int i = 0;i<n;i++)
    {
        if(frecv_autor[i] == frecv_max)
        {
            printf("Autorul cu cele mai multe carti este: %s %s\n",biblioteca[i].autor.nume,biblioteca[i].autor.prenume);
            break;
        }
    }
}

void cautare_carte2(int an, char gen, carte biblioteca[], int n)
{
    int ok = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(an == biblioteca[i].an && gen == biblioteca[i].autor.gen)
        {
            printf("Titlu: %s\n",biblioteca[i].titlu);
            printf("Autor: %s %s\n",biblioteca[i].autor.nume,biblioteca[i].autor.prenume);
            printf("\n");
            ok = 1;
        }
    }
    if(ok == 0)
        printf("Nu exista carti scrise in acest an si gen!\n");


}

void ordonare_crescatoare_lexicografica()
{
    
}

int main()
{

int n;
printf("Introduceti numarul de carti: ");
scanf("%d",&n);

carte *biblioteca=(carte*)malloc(n*sizeof(carte));
int *frecv_autor = (int*)calloc(n,sizeof(int));

getchar();

for(int i = 0;i<n;i++)
{   
    printf("Introduceti datele cartii %d: \n",i+1);
    gets(biblioteca[i].titlu);
    scanf("%s%s",&biblioteca[i].autor.nume,&biblioteca[i].autor.prenume);
    getchar();

    scanf("%d", &biblioteca[i].an);
    getchar();
    scanf("%c",&biblioteca[i].autor.gen);
    getchar();
}
    printf("Cautati o carte dupa numele unui scriitor: \n");
    Autor scriitor;
    scanf("%s%s",&scriitor.nume,&scriitor.prenume);

    cautare_carte(scriitor,biblioteca,n);
    printf("\n");

    frecv_autor_max(scriitor,biblioteca,n,frecv_autor);
    printf("\n");

    printf("Cautati o carte dupa an si gen: \n");
    int an;
    char gen;
    scanf("%d",&an);
    getchar();
    scanf("%c",&gen);
    getchar();

    cautare_carte2(an,gen,biblioteca,n);

    free(biblioteca);
    free(frecv_autor);

    return 0;




}