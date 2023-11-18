#include <stdio.h>
#include <stdlib.h>

void verf(int n, int *p, int *poz, int *neg, int *nul)
{
    *poz = 0;
    *neg = 0;
    *nul = 0;
    for (int i = 0; i < n;i++)
    {
        if(*(p+i) > 0)
            (*poz)++;
        else 
            if(*(p+i) < 0)
                (*neg)++;
            else
                (*nul)++;
    }
}


int main()
{
    int n, poz , neg, nul;
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n;i++)
        scanf("%d", p + i);
    verf(n, p, &poz, &neg, &nul);
    printf("%d %d %d", poz, neg, nul);

    return 0;
}
