#include <stdio.h>

int main()
{
    int v[100];
    int n;
    int p,k;

    scanf("%d", &n);

    for(int i = 0; i<n; i++)
        scanf("%d", &v[i]);

    scanf("%d",&p);

    for(int i = 1;i<=p;i++)
    {
        k = v[n-1];
        for(int j = n-1;j>0;j--)
        {
            v[j] =v[j-1];
        }
        v[0] = k;
    }

    for(int i = 0;i<n;i++)
    {
        printf("%d ", v[i]);
    }



}
