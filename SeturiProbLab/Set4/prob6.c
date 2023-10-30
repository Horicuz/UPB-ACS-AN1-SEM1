#include <stdio.h>

int main()
{
    int n,m;
    int a[100][100];

    int mx = -999999999;
    int mn = 999999999;

    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] > mx)
                mx = a[i][j];
            if(a[i][j] < mn)
                mn = a[i][j];
        }
    printf("Minmul din matrice este %d iar maximul din matrice este %d\n\n", mn, mx);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i == j)
                printf("%d ", mx);
            else
                printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i > j)
                printf("%d ", mn);
            else
                printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;


}
