#include <stdio.h>

int main()
{
    int a[100];
    int b[100];

    int d;
    int  k = 0;
    float sum = 0;
    scanf("%d ", &d);
    for(int i = 0; i<d; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];

    }
    sum = sum / d;
    printf("%.2f\n", sum);

    for(int i = 0; i<d; i++)
    {
        if(a[i] > sum)
        {
            b[k] = i;
            k++;
        }
    }
    for(int i = 0; i<k; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
