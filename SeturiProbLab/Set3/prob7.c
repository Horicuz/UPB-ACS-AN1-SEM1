
#include <stdio.h>

int main()
{
    int a[100][100];
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            scanf("%d", &a[i][j]);
    printf("\n\n");
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n\n");
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

    // triunghi superior
     for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(j>i)
                printf("%d ", a[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
    //triunghi inferior

     for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(j<i)
                printf("%d ", a[i][j]);
            else printf("  ");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i == 0 || j == 0 || i == n-1 || j == n-1)
                printf("%d ", a[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");

    int colstart = 0;
    int colend = n-1;
    int rowstart = 0;
    int rowend = n-1;
    while(colstart != colend && rowstart!= rowend)
    {
        for(int i = colstart;i <= colend;i++)
            printf("%d ", a[rowstart][i]);
        rowstart = rowstart + 1;
        for(int i = rowstart;i<= rowend;i++)
            printf("%d ", a[i][colend]);
        colend -- ;
        for(int i = colend;i>= colstart; i --)
            printf("%d ", a[rowend][i]);
        rowend --;
        for(int i = rowend;i>= rowstart; i --)
            printf("%d ", a[i][colstart]);
        colstart++;

    }


}

