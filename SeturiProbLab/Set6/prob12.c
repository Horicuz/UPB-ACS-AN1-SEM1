#include <stdlib.h>
#include <stdio.h>

void switcher(double *v, double *u, int n)
{
    for(int i = 0;i<n;i++)
    {
        double aux = *(v+i);
        *(v+i) = *(u+i);
        *(u+i) = aux;
    }
}

int main()
{
    int n,m;
    int linie1, linie2;
    int coloana1, coloana2;

    double *v[100];
    double *aux;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<n;i++)
        {   
            v[i] = (double*)malloc(sizeof(double) * m);
            for(int j = 0;j<m;j++)
                scanf("%lf", v[i] + j);
        }
    scanf("%d %d",&linie1,&linie2);
    scanf("%d %d",&coloana1,&coloana2);

    switcher(v[linie1-1], v[linie2-1], m);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            printf("%lf ",v[i][j]);
        printf("\n");
    }
    printf("\n");
    switcher(v[coloana1-1], v[coloana2-1], n);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            printf("%lf ",v[i][j]);
        printf("\n");
    }
}