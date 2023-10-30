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
        }
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            int k;
            for(int z = j+1; z<m; z++)
            {
                if(z == m)
                {
                    j = m;
                    break;
                }
                if(a[i][z] > a[i][j])
                {
                    k = a[i][j];
                    a[i][j] = a[i][z];
                    a[i][z] = k;

                }
            }

        }
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            printf("%d", a[i][j]);
        }
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
           for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            int k;
            for(int z = j+1; z<m; z++)
            {
                if(z == m)
                {
                    j = m;
                    break;
                }
                if(a[i][z] > a[i][j])
                {
                    k = a[i][j];
                    a[i][j] = a[i][z];
                    a[i][z] = k;

                }
            }

        }
            }



