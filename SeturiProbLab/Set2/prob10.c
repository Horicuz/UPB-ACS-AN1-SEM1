#include <stdio.h>

int putere(int z, int b)
{
    int c = z;
    z = 1;
    for (int i = 1; i <= b;i++)
        z = z * c;
    return z;
}

int main()
{
    int a;
    scanf("%d", &a);
    int b = 0;
    int c = a;
    while(c)
    {
        c = c / 10;
        b++;
    }

    for (int i = b-1; i >=0;i--)
    {
        printf("%d ", a / putere(10, i));
        a = a % putere(10, i);
    }
    return 0;
}