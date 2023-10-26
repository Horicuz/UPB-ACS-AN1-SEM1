#include <stdio.h>

int main()
{
    int a[10];
    int d = 11;
    while(d > 10)
    {
        scanf("%d", &d);
        getchar();
    }
    for(int i = 0;i<d;i++)
    {
        scanf("%d", &a[i]);

    }
    for(int i = d-1;i>=0;i--)
    {
        printf("%d ", a[i]);

    }

    return 0;
}
