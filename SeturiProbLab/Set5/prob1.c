#include <stdio.h>

int palindrom(int x)
{
    if(x>=0 && x<=9)
        {
            return 1;
        }
    
    int x1 = x;
    int k = 0;
    int v[10];
    while(x1)
    {
        v[k] = x1%10;
        x1 = x1/10;
        k++;

    }
    for(int i = k/2-1;i>=0;i--)
    {
        if(v[k-1-i] != v[i] )
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n", palindrom(n));
    return 0;

}
