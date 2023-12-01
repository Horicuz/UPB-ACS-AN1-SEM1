#include <stdio.h>
#include <stdlib.h>

void elim_row(int *p, int *n, int m, int row)
{
    int i, j;
    for (i = row; i < *(n)-1; i++)
    {
        for (j = 0; j < m; j++)
        {
            *(p+i*m+j) = *(p+(i+1)*m+j);
        }
    }
    *n = *n - 1;
}

int verif_row(int *p, int m, int row)
{
    if(*(p + row*m + 0) < *(p + row*m + 1))
         {
             for (int i = 2;i<m;i++)
             {
                 if(*(p + row*m + i) < *(p + row*m + i - 1) || *(p + row*m + i) == *(p + row*m + i - 1))
                     return 1;
             }
         }

     if(*(p + row*m + 0) > *(p + row*m + 1))
         {
             for (int i = 2;i<m;i++)
             {
                 if(*(p + row*m + i) > *(p + row*m + i - 1) || *(p + row*m + i) == *(p + row*m + i - 1))
                     return 1;
             }
         }
    else 
    {
       if(*(p + row*m + 0) == *(p + row*m + 1))
           return 1;
    }
    return 0;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int * p = (int *)malloc(n*m*sizeof(int));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", p+i*m+j);
    for (int i = 0; i < n;i++)
    {
        if(verif_row(p,m,i) == 1)
        {
            elim_row(p,&n,m,i);
            printf("Am eliminat linia %d\n",i+1);
            i--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", *(p+i*m+j));
        printf("\n");
    }
    free(p);
    return 0;
}
