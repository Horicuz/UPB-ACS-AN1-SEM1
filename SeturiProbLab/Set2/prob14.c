#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    float k = 0;
    float l;
    for(int i=1;i<=n;i++)
        {
            scanf("%f", &l);
            k = k+l;
            
        }
    printf("%.5f", k/n);
    return 0;
}
