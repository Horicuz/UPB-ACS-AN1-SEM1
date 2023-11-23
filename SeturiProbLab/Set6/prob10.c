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
int main()
{
    double *v[100], *u[100];
    int n,m;
    scanf("%d%d", &n, &m);
    for(int i = 0;i<n;i++)
        {   
            v[i] = (double*)malloc(sizeof(double) * m);
            for(int j = 0;j<m;j++)
                scanf("%lf", v[i] + j);
        }
    int a,b;
    scanf("%d%d", &a, &b);
    for(int i = 0;i<a;i++)
        {   
            u[i] = (double*)malloc(sizeof(double) * b);
            for(int j = 0;j<b;j++)
                scanf("%lf", u[i] + j);
        }
    if(n != a)
        {
            printf("Cele doua matrici nu sunt identice\n");
            return 0;
        }
    for(int i = 0;i<n;i++)
        {
            if(vecverif(v[i],u[i], m, b) == 0)
                {
                    printf("Cele doua matrici nu sunt identice\n");
                    return 0;
                }
        }
    
    printf("Cele 2 matrici sunt identice\n");

    for(int i = 0;i<n;i++)
        {   
            free(v[i]);

        }
    for(int i = 0;i<a;i++)
        {   
            free(u[i]);
        }
    return 0;

}