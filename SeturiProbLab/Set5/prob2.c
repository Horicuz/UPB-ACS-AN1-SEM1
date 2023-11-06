#include <stdio.h>

int perf(int n)
{   
    int sum = 0;
    for(int d = 1;d*d<=n;d++)
        {
            if(n%d == 0)
                sum += (d + n/d);
            if(d*d == n)
                sum = sum - d;
        }
    sum = sum - n;
    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", perf(x));
    return 0;
}
