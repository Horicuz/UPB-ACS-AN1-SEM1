#include <stdio.h>

int main()
{
    int n,m;
    int a[100][100];



    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);

        }
    for(int i = 1; i<n; i = i+2)
        for(int j = 0 ; j<m; j++)
        {
            if(a[i][j] % 2 == 0)
            {
                int k;
                for(int l = j+1; l<m; l++)
                {
                    if(a[i][l] % 2 == 0)
                    {
                        if(l == m)
                        {
                            j = m;
                            break;
                        }
                        if(a[i][l] < a[i][j])
                        {
                            k = a[i][j];
                            a[i][j] = a[i][l];
                            a[i][l] = k;

                        }
                    }
                }
            }
        }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
