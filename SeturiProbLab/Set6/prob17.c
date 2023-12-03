//prob17.c
#include <stdio.h>
#include <stdlib.h>

void citire(int *p, int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", p + i);
}


int main()
{
    int m;
    scanf("%d", &m);
    int *p = (int*)calloc(m, sizeof(int));
    citire(p, m);
    for(int i = 0; i < m; i++)
        printf("%d ", *(p + i));
    free(p);
    return 0;
}
