#include <stdio.h>

void piramida(char c , int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%c ", c);
        printf("\n");    
    }

}

int main()
{

    int a;
    char c;
    scanf("%c%d", &c, &a);
    piramida(c,a);
    return 0;
}
