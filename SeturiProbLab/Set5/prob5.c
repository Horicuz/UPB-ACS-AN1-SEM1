#include <stdio.h>

void prelucrare(int n, int *cifr, int *a, int* b, int* c)
{
    *cifr = 0;
    for(int i = 1;i<=3;i++)
        {
            if(n / 10 != 0)
                (*cifr)++;

            if(i == 1)
                *a = n%10;
            if(i == 2)
                *b = n%10;
            if(i == 3)
                *c = n%10; 

            n = n/10;
        }
    (*cifr)++;
}


int main()
{
    int n;
    int c1,a,b,c;
    scanf("%d", &n);
    while(n>999 || n<-999)
        scanf("%d", &n);

    prelucrare(n,&c1,&a,&b,&c);

    printf("%d\n%d %d %d", c1, c, b ,a);

}
