#include <stdio.h>

int main() 
{
    float a,b,c;
    float d = 5;
    scanf("%f%f",&a,&b);
    printf("%.3f %.3f\n", a, b);
    printf("%.5f %.5f\n", a, b);
    printf("%.2f %.2f\n", a, b);
    printf("%e\n", a);
    printf("%d\n", a+b);
    scanf("%d", &c);
    printf("%d\n", c);
    printf("%.3f\n", d);
}
