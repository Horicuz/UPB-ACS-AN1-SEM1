#include <stdio.h>
#include <stdlib.h>

int vecverif(double *v, double *u, int n, int m)
{
    if(n != m)
        return 0;
    else
        for(int i = 0;i<n;i++)
            if(*(v+i) != *(u+i))
                return 0;
    
    return 1;
        
}

void switcher(double *v, double *u, int n, int m, int* p)
{
    if(n == m)
        {   
            *p = 1;
            for(int i = 0;i<n;i++)
            {
                double aux = *(v+i);
                *(v+i) = *(u+i);
                *(u+i) = aux;
            }
        }
}

int main()
{
    int n,m;
    double *v[100];
    double *aux;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<n;i++)
        {   
            v[i] = (double*)malloc(sizeof(double) * m);
            for(int j = 0;j<m;j++)
                scanf("%lf", v[i] + j);
        }
    int p;
    scanf("%d",&p);
    aux = (double*)malloc(sizeof(double) * p);
    for(int i=0;i<p;i++)
        {
            scanf("%lf",aux+i);
        }
    int ok = 0;
    printf("Liniile matricei care sunt identice cu vectorul dat sunt:\n");
    for(int i = 0;i<n;i++)
        {   
           if(vecverif(v[i],aux,m,p))
                {printf("%d ",i+1);
                ok = 1;}
        }
    if(ok == 0)
       { 
            printf("Nu exista nicio linie identica cu vectorul dat\n");
            switcher(v[0],aux,m,p,&ok);
            if(ok == 1)
                {
                    printf("Matricea obtinuta prin interschimbarea primei linii cu vectorul dat este:\n");
                    for(int i = 0;i<n;i++)
                        {
                            for(int j = 0;j<m;j++)
                                printf("%lf ",*(v[i]+j));
                            printf("\n");
                        }
                }
            else
                printf("Numarul de coloane al matricei este diferit de numarul de elemente al vectorului\n");
       }

    free(aux);    
    for(int i = 0;i<n;i++)
        {   
            free(v[i]);

        }
    return 0;
}