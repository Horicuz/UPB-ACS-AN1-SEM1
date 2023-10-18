#include <stdio.h>

int main()
{

    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d + %d = %d  ", a, b, a+b);
    printf("%d + %d = %d  ", b, c, c+b);
    printf("%d + %d = %d  ", a, c, a+c);

    return 0;
}
