#include <stdio.h>

int main()
{
        float a,b;
        float k;
        scanf("%f%f",&a,&b);
        k = a;
        a = b;
        b = k;
        printf("a = %.1f\n", a);
        printf("b = %.1f\n", b);
        printf("%.1f", (a+b)/2);
        return 0;

}

