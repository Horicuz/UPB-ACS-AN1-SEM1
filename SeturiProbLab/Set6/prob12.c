#include <stdio.h>
#include <stdlib.h>

void switcher(int *p, int*q, int n)
{
    for(int i = 0;i<n;i++)
    {
        int temp = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) = temp;
    }
}


int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int *p = (int*)malloc(sizeof(int)*n*m);
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            scanf("%d", p+i*m+j);
    int linie1,linie2;
    scanf("%d %d", &linie1, &linie2);
    int coloana1, coloana2;
    scanf("%d %d", &coloana1, &coloana2);
    switcher(p+m*linie1, p+m*linie2, m);

    printf("The matrix after the switch:\n");
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            printf("%d ", *(p+i*m+j));
        printf("\n");
    }

    int* a =(int*)malloc(sizeof(int)*n);
    int* b =(int*)malloc(sizeof(int)*n);

    for(int i = 0;i<n;i++)
    {
        *(a+i) = *(p+i*m+coloana1);
        *(b+i) = *(p+i*m+coloana2);
    }

    switcher(a, b, n);

    for(int i = 0;i<n;i++)
    {
        *(p+i*m+coloana1) = *(a+i);
        *(p+i*m+coloana2) = *(b+i);
    }

    printf("The matrix after the switch:\n");
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            printf("%d ", *(p+i*m+j));
        printf("\n");
    }

    free(p);
    free(a);
    free(b);

    return 0;


}