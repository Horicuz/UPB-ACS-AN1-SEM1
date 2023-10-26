#include <stdio.h>

int main()
{
    int a[20];
    int d = 20;
    int k = 99999999999;

    for(int i = 0;i < d;i++)
    {
        scanf("%d", &a[i]);
        if(a[i] < k)
            k = a[i];

    }
    for(int i = 0;i < d;i++)
    {
        if(a[i] == k)
            printf("%d ", i);

    }

    return 0;
}
