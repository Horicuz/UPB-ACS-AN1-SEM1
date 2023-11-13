#include <stdio.h>
#include <stdlib.h>
void citire(int *v, int n)
{
    for(int i = 0;i<n;i++)
        scanf("%d", &v[i]);
}
void ad(int *v1, int *v2, int n, int m)
{
    if(n > m)
    {
        v1 = (int*)realloc(v1, (n+m)*sizeof(int));
        for(int i = 0;i<m;i++)
        {
            v1[n+i] = v2[i];
        }
    }
    else
    {
        v2 = (int*)realloc(v2, (n+m)*sizeof(int));
        for(int i = 0;i<n;i++)
        {
            v2[m+i] = v1[i];
        }
    }
}
int main()
{
    int *v1, *v2;
    int n,m;
    scanf("%d%d", &n, &m);
    int dim1 = n*sizeof(int);
    int dim2 = m*sizeof(int);
    v1 = (int*)malloc(dim1);
    v2 = (int*)malloc(dim2);
   citire(v1,n);
   citire(v2,m);
   ad(v1,v2,n,m);
    if(n>m)
        for(int i = 0;i<n+m;i++)
            printf("%d ", v1[i]);
    else 
        for(int i = 0;i<n+m;i++)
            printf("%d ", v2[i]);
    free(v1);
    free(v2);
    return 0;
}
