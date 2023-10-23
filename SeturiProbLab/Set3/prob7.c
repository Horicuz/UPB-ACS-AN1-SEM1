#include <stdio.h>

int main()
{
    int a[100][100];
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

     for(int i = 0; i<n; i++)
    {
       printf("%d ", a[i][i]);
    }
    printf("\n\n");
    for(int i = 0; i<n; i++)
    {
       printf("%d ", a[i][n-1-i]);
    }
     printf("\n\n");


}

