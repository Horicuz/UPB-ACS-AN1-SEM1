#include <stdio.h>
#include <stdlib.h>

void sortare(int *p, int n)
{
    for(int i = 0;i<n;i++)
        for(int j = i+1;j<n;j++)
            if(*(p+i)>*(p+j))
            {
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
}


int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int *p = (int*)malloc(sizeof(int)*n*m);
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            scanf("%d", p+i*m+j);

    for(int i = 0;i<n;i++)
        sortare(p+i*m, m);
    
    printf("The matrix after the sort:\n");
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            printf("%d ", *(p+i*m+j));
        printf("\n");
    }

    free(p);

    return 0;




}