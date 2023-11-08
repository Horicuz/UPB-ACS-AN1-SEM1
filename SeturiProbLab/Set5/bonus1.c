#include <stdio.h>

int fibo(int n)
{
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    int a1 = 0;
    int a2 = 1;
    for (int i = 2; i <= n;i++)
        {
            int k = a1;
            a1 = a2;
            a2 = a2 + k;
            
        }
    return a1;
}

int fact(int n)
{
    if(n == 0 || n == 1)
            return 0;
    int p = 1;
    for (int i = 2; i <= n;i++)
            p = p * i;
    return p;
}

float expresie(int n)
{
    return (float) fibo(n) / (float) fact(n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("FIBO E: %d ", fibo(n));
    printf("FACT E: %d ", fact(n));
    printf("%f\n", expresie(n));
    return 0;
}
