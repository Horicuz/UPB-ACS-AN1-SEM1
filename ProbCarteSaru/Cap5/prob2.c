#include <stdio.h>

int main()
{
    int a[15];
    int d = 15;
    int k = 0;

    for(int i = 0;i<d;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>=25)
            k++;

    }
    printf("%d", k);
    return 0;
}
