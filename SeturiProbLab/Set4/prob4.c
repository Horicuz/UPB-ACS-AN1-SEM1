#include <stdio.h>

int main()
{
    int v[100], w[100], c[200];
    int n,m;
    int p = 0;
    int vi, wi;
    int iv = 0, iw = 0;
    scanf("%d", &n);
    for (int l = 0; l < n;l++)
    {
        scanf("%d", &vi);
        if(vi%2 == 1)
            v[iv++] = vi;
    }
    scanf("%d", &m);
    for (int o = 0; o < m;o++)
    {
        scanf("%d", &wi);
        if(wi%2 == 1)
            w[iw++] = wi;
    }
    int i = 0, j = 0;
    while(i<iv && j<iw)
    {
        if (v[i] < w[j])
            c[p++] = v[i++];
        else
            c[p++] = w[j++];
    }

    while (i < iv)
        c[p++] = v[i++];
    while (j < iw)
        c[p++] = w[j++];

    for (int z = 0; z < p;z++)
    {
        printf("%d ", c[z]);
    }
        return 0;
}