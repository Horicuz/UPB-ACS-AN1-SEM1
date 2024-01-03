#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student{

    char nume[20];
    int nota1;
    int nota2;
    int nota3;
};

typedef struct student STUDENT;

int main()
{
    STUDENT studenti[7];   // vector de studenti
    int n;
    scanf("%d", &n);
    for (int i = 0; i <n;i++)
    {
        scanf("%s", studenti[i].nume);
        scanf("%d", &studenti[i].nota1);
        scanf("%d", &studenti[i].nota2);
        scanf("%d", &studenti[i].nota3);
    }

    char student1[20];
    scanf("%s", student1);
    for (int i = 0;i<n;i++)
    {
        if(strcmp(studenti[i].nume, student1) == 0)
        {   
            printf("Studentul %s are urmatoarele note: \n", studenti[i].nume);
            printf("%d ", studenti[i].nota1);
            printf("%d ", studenti[i].nota2);
            printf("%d", studenti[i].nota3);
            printf("\n");
        }
    }
    int materie;
    scanf("%d", &materie);

    char studenti_buni[7][20];
    int j = 0;
    int max = 0;
    switch(materie)
    {
        
        
        case 1:
            for (int i = 0;i<n;i++)
            {
                if(studenti[i].nota1 > max)
                {
                    max = studenti[i].nota1;
                }
            }
            for(int i = 0;i<n;i++)
            {
                if(studenti[i].nota1 == max)
                {
                    strcpy(studenti_buni[j], studenti[i].nume);
                    j++;
                }
            }
            break;
        case 2:
            for (int i = 0;i<n;i++)
            {
                if(studenti[i].nota2 > max)
                {
                    max = studenti[i].nota2;
                }
            }
            for(int i = 0;i<n;i++)
            {
                if(studenti[i].nota2 == max)
                {
                    strcpy(studenti_buni[j], studenti[i].nume);
                    j++;
                }
            }
            break;
        case 3:
            for (int i = 0;i<n;i++)
            {
                if(studenti[i].nota3 > max)
                {
                    max = studenti[i].nota3;
                }
            }
            for(int i = 0;i<n;i++)
            {
                if(studenti[i].nota3 == max)
                {
                    strcpy(studenti_buni[j], studenti[i].nume);
                    j++;
                }
            }
            break;
        default:
            printf("Nu exista aceasta materie");
            break;
    }
    printf("J ESTE %d\n", j);
    if(j == 1)
    {
        printf("Cel mai bun student la materia %d este %s", materie, studenti_buni[0]);
    }
    else
    {
       //sortam alfabetic studentii
        for(int i = 0;i<j;i++)
        {
            for(int k = i+1;k<j;k++)
            {
                if(strcmp(studenti_buni[i], studenti_buni[k]) > 0)
                {
                    char aux[20];
                    strcpy(aux, studenti_buni[i]);
                    strcpy(studenti_buni[i], studenti_buni[k]);
                    strcpy(studenti_buni[k], aux);
                }
            }
        }
        printf("Cei mai buni studenti la materia %d sunt: \n", materie);
        for(int i = 0;i<j;i++)
        {
            printf("%s\n", studenti_buni[i]);
        }
    }

    float medii[7];
    float maxmed = 0;
    for (int i = 0; i < n;i++)
    {
        medii[i] = (float)(studenti[i].nota1 + studenti[i].nota2 + studenti[i].nota3) /(float)3;
        if(medii[i] > maxmed)
        {
            maxmed = medii[i];
           
        }
    }
    printf("Cei mai buni studenti sunt:\n");
    for (int i = 0;i<n;i++)
    {
        if(medii[i] == maxmed)
        {
            printf("%s\n", studenti[i].nume);
        }
    }

    for (int i = 0;i<n;i++)
    {
       for(int j = i+1;j<n;j++)
       {
          if(studenti[i].nota2 < studenti[j].nota2)
          {
              STUDENT aux;
              aux = studenti[i];
              studenti[i] = studenti[j];
              studenti[j] = aux;
          }
       }
    }
    printf("Studentii sortati dupa nota 2 sunt:\n");
    for(int i = 0;i<n;i++)
    {
        printf("%s", studenti[i].nume);
        printf("%d", studenti[i].nota1);
        printf("%d", studenti[i].nota2);
        printf("%d", studenti[i].nota3);
        printf("\n");
    }
}
