#include <stdio.h>
#include <string.h>

struct informatie
{
    char firma[20];
    char produs[20];
    int cantitate;
};

typedef struct informatie INFO;

int main()
{

    int n;
    INFO piata[6];
    printf("Introduceti numarul de produse: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Introduceti firma: ");
        scanf("%s", piata[i].firma);
        printf("Introduceti produsul: ");
        scanf("%s", piata[i].produs);
        printf("Introduceti cantitatea: ");
        scanf("%d", &piata[i].cantitate);
    }

    char produs_cautat[20];
    printf("Introduceti produsul cautat: ");
    scanf("%s", produs_cautat);

    int max = 0;
    int imax;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(piata[i].produs, produs_cautat) == 0)
        {
            if (piata[i].cantitate > max)
            {
                max = piata[i].cantitate;
                imax = i;
            }
        }
    }
    printf("Firma ce are cea mai mare cantitate de %s este %s\n", produs_cautat, piata[imax].firma);

    char produs_cautat2[20];
    printf("Introduceti produsul cautat: ");
    scanf("%s", produs_cautat2);

    int cantitate_totala = 0;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(piata[i].produs, produs_cautat2) == 0)
        {
            cantitate_totala += piata[i].cantitate;
        }
    }
    printf("Cantitatea totala de %s este %d\n", produs_cautat2, cantitate_totala);

    return 0;
}
