#include <stdio.h>

void f(int n, int *p, int *ok)
{
    *ok = 0;
    int putere = 1;
    *p = 0;
    while(n)
    {
        if(n%2 == 0)
            {   
                *ok = 1;
                *p = *p + putere * (n%10);
                putere = putere * 10;
            }
        n = n / 10;
    }
}

int main()
{
    int n,p,ok;
    scanf("%d", &n);
    f(n, &p, &ok);
    if(ok == 1)
        printf("%d\n", p);
    else
        printf("%d\n", ok);
        return 0;

}
