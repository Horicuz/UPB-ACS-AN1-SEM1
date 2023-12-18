#include <stdio.h>
#include <string.h>

struct Sistem
{
    char denumire_sistem[20];
    char tip_procesor[20];
    float frecventa_procesor;
    int RAM;
    int HDD;
};

typedef struct Sistem SISTEM;

struct Produs
{
    SISTEM sistem;
    int disponibil_stoc;
    float pret;
};

typedef struct Produs PRODUS;

void citire(PRODUS stoc[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Denumire sistem: ");
        scanf("%s", stoc[i].sistem.denumire_sistem);
        while (1)
        {
            int ok = 0;
            for (int j = 0; j < i; j++)
                if (strcmp(stoc[i].sistem.denumire_sistem, stoc[j].sistem.denumire_sistem) == 0)
                {
                    printf("Denumirea sistemului exista deja. Introduceti alta denumire: ");
                    scanf("%s", stoc[i].sistem.denumire_sistem);
                    ok = 1;
                }
            if (ok == 0)
                break;
        }

    printf("Tip procesor: ");
    getchar();
    gets(stoc[i].sistem.tip_procesor);
    printf("Frecventa procesor: ");
    scanf("%f", &stoc[i].sistem.frecventa_procesor);
    printf("RAM: ");
    scanf("%d", &stoc[i].sistem.RAM);
    printf("HDD: ");
    scanf("%d", &stoc[i].sistem.HDD);
    printf("Disponibil stoc: ");
    scanf("%d", &stoc[i].disponibil_stoc);
    printf("Pret: ");
    scanf("%f", &stoc[i].pret);
    
    }
}

void cautare_pret(PRODUS stoc[], int n, float pret, PRODUS stoc_pret[], int *nr)
{
    for (int i = 0; i < n; i++)
        if (stoc[i].pret < pret + (pret / 10) && stoc[i].pret > pret - (pret / 10))
        {
            stoc_pret[*nr] = stoc[i];
            (*nr)++;
        }
}

int valoarea_totala(PRODUS stoc[], int n, char tip[])
{
    int cnt = 0;
    for (int i = 0; i < n;i++)
        {
            if(strcmp(stoc[i].sistem.tip_procesor, tip) == 0)
                if(stoc[i].disponibil_stoc > 0)
                    cnt++;
        }
    return cnt;
}


int main()
{
    int n;
    int nr = 0;
    scanf("%d", &n);
    PRODUS stoc[100];
    PRODUS stoc_pret[100];

    citire(stoc, n);
    int pret;

    printf("Pret: ");
    scanf("%d", &pret);

    cautare_pret(stoc, n, pret, stoc_pret, &nr);

    printf("Sistemele gasite sunt: \n");

    for (int i = 0;i<nr;i++)
        {
            printf("%s\n", stoc_pret[i].sistem.denumire_sistem);
        }

    printf("Tip de procesor: ");
    char tip[20];
    
    getchar();
    gets(tip);

    printf("Valoarea totala a sistemelor disponibile cu acest tip de procesor este: %d", valoarea_totala(stoc, n, tip));

        return 0;
}
