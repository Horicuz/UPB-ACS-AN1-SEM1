//Potop Horia-Ioan 313 AA

#include <stdio.h>
#include <string.h>


struct meniul_zilei
{
    char Ciorba[20];
    char Felul2[20];
    char Desert[20];
    int Pret;
    int KCal;
};


typedef struct meniul_zilei MENIUL_ZILEI;

void citire(MENIUL_ZILEI saptamana[])
{
    for(int i = 0; i<7; i++)
    {
        printf("Introduceti informatiile despre meniul din ziua: %d\n", i+1);
        gets(saptamana[i].Ciorba);

        gets(saptamana[i].Felul2);

        gets(saptamana[i].Desert);

        scanf("%d%d", &saptamana[i].Pret, &saptamana[i].KCal);
        printf("\n");
        getchar();

    }

}

void cautare(MENIUL_ZILEI saptamana[], char ziua[],int* pretul,int* KCal)
{
    if(strcmp(ziua,"luni") == 0)
    {
        *pretul = saptamana[0].Pret;
        *KCal = saptamana[0].KCal;
    }
    else if(strcmp(ziua,"marti") == 0)
    {
        *pretul = saptamana[1].Pret;
        *KCal = saptamana[1].KCal;
    }
    else if(strcmp(ziua,"miercuri") == 0)
    {
        *pretul = saptamana[2].Pret;
        *KCal = saptamana[2].KCal;
    }
    else if(strcmp(ziua,"joi") == 0)
    {
        *pretul = saptamana[3].Pret;
        *KCal = saptamana[3].KCal;
    }
    else if(strcmp(ziua,"vineri") == 0)
    {
        *pretul = saptamana[4].Pret;
        *KCal = saptamana[4].KCal;
    }
    else if(strcmp(ziua,"sambata") == 0)
    {
        *pretul = saptamana[5].Pret;
        *KCal = saptamana[5].KCal;
    }
    else if(strcmp(ziua,"duminica") == 0)
    {
        *pretul = saptamana[6].Pret;
        *KCal = saptamana[6].KCal;
    }
}

void sortare(MENIUL_ZILEI saptamana[])
{
    for(int i = 0; i<7; i++)
        for(int j = i+1; j<7; j++)
            if(saptamana[i].Pret < saptamana[j].Pret)
            {
                MENIUL_ZILEI aux = saptamana[i];
                saptamana[i] = saptamana[j];
                saptamana[j] = aux;
            }
}

int main()
{
    MENIUL_ZILEI saptamana[7];

    citire(saptamana);

    char ziua[8];

    int pretul_dorit, KCal_dorit;

    printf("Introduceti ziua dorita: \n");
    scanf("%s", &ziua);

    cautare(saptamana, ziua, &pretul_dorit, &KCal_dorit);
    printf("%d %d", pretul_dorit, KCal_dorit);


    sortare(saptamana);

    printf("Voi afisa doar ciorba din fiecare meniu pentru referinta/verificare, dupa sortarea meniurilor dupa pret\n");
    for(int i = 0; i<7; i++)
        {
            puts(saptamana[i].Ciorba);
            printf("\n");
        }


    return 0;

}
