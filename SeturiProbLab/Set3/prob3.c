#include <stdio.h>

int main()
{
    int v[100];
    int v1[100];
    int n;
    int mx = -1;
    int valx;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    for(int i = 0;i<=n;i++)
    {
        int maxloc = 1;
        for(int j = i+1;j<n;j++)
            {
                if(v[j] == v[i])
                {
                    maxloc++;
                }
            }
        v1[i] = maxloc;
        if(maxloc > mx)
        {
            mx = maxloc;
        }
    }
    for(int i = 0;i<n;i++)
        if(v1[i] == mx)
            printf("%d ", v[i]);
}
