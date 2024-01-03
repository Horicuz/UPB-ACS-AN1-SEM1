#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


struct persoana{

    char nume[20];
    char prenume[20];
    char CNP[14];
};

typedef struct persoana PERSOANA;

int data_nasterii(char CNP[14])
{
    int an, luna, zi;
    an = (CNP[1] - '0') * 10 + (CNP[2] - '0');
    luna = (CNP[3] - '0') * 10 + (CNP[4] - '0');
    zi = (CNP[5] - '0') * 10 + (CNP[6] - '0');
    if(CNP[0] == '1' || CNP[0] == '2')
    {
        an += 1900;
    }
    else if(CNP[0] == '3' || CNP[0] == '4')
    {
        an += 1800;
    }
    else if(CNP[0] == '5' || CNP[0] == '6')
    {
        an += 2000;
    }
    else
    {
        printf("CNP invalid!\n");
        exit(1);
    }
    printf("Data nasterii: %d.%d.%d\n", zi, luna, an);
    return an * 10000 + luna * 100 + zi;

}
int main()
{
    PERSOANA p[100];
    int n;
    printf("Introduceti numarul de persoane: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Introduceti numele persoanei %d: ", i+1);
        scanf("%s", p[i].nume);
        printf("Introduceti prenumele persoanei %d: ", i+1);
        scanf("%s", p[i].prenume);
        printf("Introduceti CNP-ul persoanei %d: ", i+1);
        scanf("%s", p[i].CNP);
        printf("\n");
    }
    //ordonati descrescator dupa data nasterii
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(data_nasterii(p[i].CNP) < data_nasterii(p[j].CNP))
            {
                PERSOANA aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%s %s %s\n", p[i].nume, p[i].prenume, p[i].CNP);
    }

    return 0;
}
