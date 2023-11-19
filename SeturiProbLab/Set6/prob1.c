#include <stdio.h>

void vec(int n, int v[], int* k)
{
    *k=0;
    for(int i = 0;i<n-1;i++)
    {
        if(v[i] == v[i+1])
            (*k)++;
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    int v[100];

    for(int i = 0;i<n;i++)
        scanf("%d", &v[i]);

    int k;

    vec(n,v,&k);

    printf("%d", k);

    return 0;
}