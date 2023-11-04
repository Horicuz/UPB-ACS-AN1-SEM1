#include <stdio.h>

int main()
{
    int n;
    int v[100];
    scanf("%d", &n);
    scanf("%d", &v[0]);
    for(int  i = 1; i<n; i++)
    {
        scanf("%d", &v[i]);
        if(v[i] < v[i-1])
        {
            printf("Gresit!");
            break;
        }
    }

    int k;
    int a = 0;
    scanf("%d", &k);
    for(int i = 0; i<n; i++)
    {
        if(k < v[i])
        {
            a = 1;
            for(int j = n; j>i; j--)
                v[j] = v[j-1];
            v[i] = k;
            i = n;
        }
    }
    if(a == 0)
        {
            v[n] = k;
        }


    for(int i = 0; i<n+1; i++)
    {
        printf("%d ", v[i]);
    }


}
