#include <stdio.h>
#include <stdlib.h>

void row_swap(int *p, int m, int i, int j)
{
    for(int k = 0;k<m;k++)
    {
        int temp = *(p+i*m+k);
        *(p+i*m+k) = *(p+j*m+k);
        *(p+j*m+k) = temp;
    }
}

int sum_row(int *p, int m)
{
    int sum = 0;
    for(int i=0;i<m;i++)
    {
        sum += *(p+i);
    }
    return sum;

}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int *p = (int*)malloc(n*m*sizeof(int));
    int *s = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",p+i*m+j);
        }
    }

    for(int i = 0;i<n;i++)
    {
        *(s+i) = sum_row(p+i*m,m);
    }

    for(int i = 0;i<n;i++)
    {
       for(int j = i+1;j<n;j++)
        if(*(s+i) > *(s+j))
        {
            row_swap(p,m,i,j);
            int temp = *(s+i);
            *(s+i) = *(s+j);
            *(s+j) = temp;
            j--;

        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",*(p+i*m+j));
        }
        printf("\n");
    }

    free(p);
    free(s);
    return 0;

}