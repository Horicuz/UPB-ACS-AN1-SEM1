#include <stdio.h>




int main()
{
    int n;
    scanf("%d", &n);
    int kp = 0;
    int ki = 0;
    int v[n], vp[n], vi[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &v[i]);
        if(v[i]%2 == 0)
            vp[kp++] = v[i];
        else
            vi[ki++] = v[i];
    }
    for(int i = 0; i<ki; i++)
    {
       printf("%d ", vi[i]);
    }

    printf("\n");

    for(int i = 0; i<kp; i++)
    {
       printf("%d ", vp[i]);
    }

    return 0;

}
