#include <stdio.h>

int main()
{

    unsigned long long sum = 0;

    int n;

    scanf("%d", &n);

    for (int d = 1; d <= n; d++)
    {
        unsigned long long factorial = 1;

        for (int i = 1; i <= d; i++)
            factorial *= i;
            
        sum += factorial;
    }

    printf("%llu\n", sum);

    return 0;
}