#include <stdio.h>
#include <stdlib.h>

void vec(int n, int* p, int* max, int* k)
{
    int i = 0;
    *k = 0;
    for(i;i<n;i++)
        {
            if(*(p+i) % 2 == 1)
                {
                    *max = *(p+i);
                    *k = 1;
                    break;
                }
        }

    for(i;i<n;i++)
        if(*(p+i) % 2 == 1)
            if(*(p+i) > *max)
                *max = *(p+i); 
}

int main()
{
    int n,max;
    scanf("%d", &n);
    int *v;
    int k;
    v = (int*)malloc(n * sizeof(int));

    for(int i = 0;i<n;i++)
        scanf("%d",v+i);
    vec(n,v,&max,&k);
    if(k == 1)
        printf("%d", max);
    else 
        printf("Nu exista elemente impare\n");
    free(v);

    return 0;

}