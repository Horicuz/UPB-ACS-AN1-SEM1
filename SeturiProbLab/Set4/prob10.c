#include <stdio.h>

int main()
{
    int n,p;
    int v[100],poz[100];

    scanf("%d", &n);

    for(int  i = 0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &p);
    for(int  i = 0; i<p; i++)
    {
        scanf("%d", &poz[i]);
    }

    for(int i = 0; i<p; i++)
    {
       printf("%d ", v[poz[i]]);
    }

    return 0;

}

