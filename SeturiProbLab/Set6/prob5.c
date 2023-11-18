#include <stdio.h>
#include <stdlib.h>

void vec(int v1[], int v2[], int n, int *k)
{
    int min = 2147483647;
    *k = 0;
    for (int i = 0; i < n;i++)
        if(v1[i] < min)
        {
            min = v1[i];
        }
     for (int i = 0; i < n;i++)
        if(v1[i] == min)
            {
                v2[*k] = i + 1;
                (*k)++;
            } 
            // sau poti pune i+1 daaca vrei pozitia din practica din vector (a,b,c) a se afla pe pozitia 1 , b pe 2 ..
}

int main()
{
    int n,k;
    scanf("%d", &n);

    int v1[100], v2[100];

    for (int i=0; i<n;i++)
        {
            scanf("%d", &v1[i]);
        }

    vec(v1, v2, n, &k);

    for (int i=0; i<k;i++)
        printf("%d ", v2[i]);

    return 0;
}
