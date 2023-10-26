#include <stdio.h>

int main()
{
    int a[100];
    int b[100];

    int d;

    scanf("%d", &d);
    for(int i = 0; i<d; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i<d; i++)
    {
        int k = 0;
        for(int j = 0; j<d; j++)
            if(a[j] < a[i])
                k++;
        printf("%.2f",  ((float)k / (float) d)*100);
        printf(" la suta ");
    }

    return 0;
}
