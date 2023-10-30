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
    scanf("%d", &k);
    for(int i = 0; i<n; i++)
    {
        if(k < v[i])
        {
            for(int j = ++n; j>i; j--)
                v[j] = v[--j];
            v[i] = k;
            i = n;
            break;
        }
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ", v[i]);
    }


}
