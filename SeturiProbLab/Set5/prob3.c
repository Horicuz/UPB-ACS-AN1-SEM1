#include <stdio.h>

char f(int a, int b, int c)
{
    if(a<b && b<c)
        return 'C';
    else if(a>b && b>c)
        return 'D';
    else if(a == b && b == c)
        return 'I';
    else 
        return 'N';

}


int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    
    printf("%c\n", f(a,b,c));
    return 0;
}
