#include <stdio.h>

void perm(int v1[], int n, int z)
{
    for (int j = 1; j <= z; j++)
    {
        int k = v1[n - 1];
        for (int l = n - 1; l > 0; j--)
        {
            v1[j] = v1[j - 1];
        }
        v1[0] = k;
    }
}

int main()
{
    int n, m, v1[100], a[100][100];
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("done");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v1[j] = a[i][j];
        }
        perm(v1, m, n);
        for (int j = 0; j < m; j++)
        {
            a[i][j] = v1[j];
        }
    }

    for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }

    return 0;
}