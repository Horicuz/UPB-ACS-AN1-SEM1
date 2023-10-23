#include <stdio.h>

int main()
{
    int v[101];
    int v1[101];

    int n;
    int k = 0;

    scanf("%d", &n);

    for(int i = 0; i<n; i++)
        scanf("%d", &v[i]);

    for(int i = 0; i<n; i++)
    {
        int cnt = 0;
        for(int j = 0; j<i; j++)
        {
            if(v[j] == v[i])
            {
                cnt = 1;
                break;
            }
        }
        if(cnt == 0)
        {
            v1[k] = v[i];
            k++;
        }

    }

    for(int i = 0; i < k; i++)
        printf("%d ", v1[i]);

    return 0;
}
