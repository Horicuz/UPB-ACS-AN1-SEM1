#include <stdio.h>

int vec(int v1[], int n, int v2[], int *m, int v3[], int* k)
{
    *m = 0;
    *k = 0;
    for(int i = 0;i<n;i++)
        if(v1[i]%2 == 0)
            v2[(*m)++] = v1[i];
        else
            v3[(*k)++] = v1[i];
}

int main()
{
    int n;
    int v1[100];
    int v2[100], v3[100];
    int m,k;

    scanf("%d", &n);
    for(int i = 0;i<n;i++)
        scanf("%d", &v1[i]);
    
    vec(v1,n,v2,&m,v3,&k);

    if(k == 0)
        {
            printf("Nu  avem numere impare\n");
            for(int i = 0;i<m;i++)
                printf("%d ", v2[i]);
        }
    else if(m == 0)
        {
            printf("Nu  avem numere pare\n");
            for(int i = 0;i<k;i++)
                printf("%d ", v3[i]);
        }
    else 
        {
            for(int i = 0;i<m;i++)
                printf("%d ", v2[i]);
            printf("\n");
            for(int i = 0;i<k;i++)
                printf("%d ", v3[i]);
        }

    return 0;
}