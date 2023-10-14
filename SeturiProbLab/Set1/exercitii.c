#include <stdio.h>

int bc(int n, int b)
{
    int a = 1;
    int nr = 0;
    while(n)
    {
        nr = nr + (n % b)*a;
        n = n / b;
        a = a * 10;
    }

    return nr;
}

int main()
{
    int a = 0;
    int b;
    while(1)
    {
        printf("Introdu un numar de la tastatura:\n");
        scanf("%d", &a);
        if(a==-1)
            break;
        printf("In ce baza doresti sa schimbi numarul?\n");
        scanf("%d", &b);
        printf("In baza %d numarul %d este %d.\nIar dublul sau este %d\n", b, a, bc(a, b), 2 * bc(a, b));

       
    }

    return 0;
}