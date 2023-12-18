#include <stdio.h>
#include <string.h>

struct Autoturism
{
    char Tip[20];
    float Consum;
    int cost_inchiriere;
    char Disponibilitate;
};

typedef struct Autoturism AUTOTURISM;

void citire(AUTOTURISM evidenta[], int n)
{
    for (int i = 0; i < n; i++)
    {   
        printf("Tipul autoturismului este: ");
        gets(evidenta[i].Tip);
        printf("Consumul autoturismului este: ");
        scanf("%f", &evidenta[i].Consum);
        printf("Costul de inchiriere este: ");
        scanf("%d", &evidenta[i].cost_inchiriere);
        printf("Disponibilitatea este: ");
        getchar();
        evidenta[i].Disponibilitate = getchar();
        printf("\n");
        getchar();
    }
}

void interval_pret(AUTOTURISM evidenta[], int n, float consum_specific, int *pret_min, int *pret_max)
{
    *pret_min = 1000000;
    *pret_max = 0;
    for (int i = 0; i < n; i++)
    {
        if (evidenta[i].Consum == consum_specific)
        {
            if (evidenta[i].cost_inchiriere < *pret_min)
                *pret_min = evidenta[i].cost_inchiriere;

            if (evidenta[i].cost_inchiriere > *pret_max)
                *pret_max = evidenta[i].cost_inchiriere;
        }
    }
}

void creare(AUTOTURISM evidenta[], int n, float pret_orientativ, char tip[20], AUTOTURISM Special[], int *m)
{
    printf("1\n");
    *m = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(evidenta[i].Tip, tip) == 0)
        {
            printf("2\n");
            if (evidenta[i].cost_inchiriere <= pret_orientativ)
            {   
                printf("3\n");
                printf("%c", evidenta[i].Disponibilitate);
                if (evidenta[i].Disponibilitate == 'D')
                {   
                    printf("4\n");
                    Special[*m] = evidenta[i];
                    (*m)++;
                    printf("%d", *m);
                }
            }
        }
    }
}

int main()
{
    AUTOTURISM evidenta[100];
    int n;
    float consum_specific;
    int pret_min, pret_max;
    scanf("%d", &n);
    getchar(); 

    citire(evidenta, n);

    printf("Consumul specific este: ");
    scanf("%f", &consum_specific);

    interval_pret(evidenta, n, consum_specific, &pret_min, &pret_max);

    if (pret_max == 0)
        printf("Nu exista autoturisme cu consumul specificat");
    else
        printf("Intervalul de pret este: [%d EUR - %d EUR]", pret_min, pret_max);

    char tip[20];
    printf("\nTipul autoturismelor cerute este: ");
    getchar();
    gets(tip);

    int pret_orientativ;
    printf("\nPretul orientativ este: ");
    scanf("%d", &pret_orientativ);

    AUTOTURISM Special[100];
    int m;

    creare(evidenta, n, pret_orientativ, tip, Special, &m);

    for (int i = 0; i < m; i++)
    {
        printf("%s\n", Special[i].Tip);
        printf("%d\n", Special[i].cost_inchiriere);
        printf("\n");
    }
    return 0;
}
