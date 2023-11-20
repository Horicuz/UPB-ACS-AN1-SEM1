#include <stdio.h>

void vec(int v1[],int *n)
{
    for(int i = 1;i<(*n);i++)
        if(v1[i] == v1[0])
            {
                for(int j = i;j<*(n)-1;j++)
                    v1[j] = v1[j+1];
                (*n) --;
                i --;
            }
    for(int i = 0;i<(*n)-1;i++)
        v1[i] = v1[i+1];
    (*n)--;
    
}

int main()
{
    int n;
    int v1[100];
    int k;

    scanf("%d", &n);
    for(int i = 0;i<n;i++)
        scanf("%d", &v1[i]);
    
    vec(v1, &n);

    for(int i = 0;i<n;i++)
        printf("%d ", v1[i]);

    return 0;
}