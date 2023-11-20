#include <stdio.h>

void vec(int v1[],int n, int v2[], int m, int v3[], int *k)
{
    *k = 0;
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            {
                if(v1[i] == v2[j])
                    {   
                        int ok = 1;
                        for(int p = 0;p<(*k);p++)
                            if(v3[p] == v1[i])
                                {
                                    ok = 0;
                                    break;
                                }

                        if(ok!=0)
                        {
                            v3[(*k)] = v1[i];
                            (*k) ++;
                            break;
                        }
                    }
            }
}

int main()
{
    int n,m;
    int v1[100];
    int v2[100];
    int v3[100];
    int k;

    scanf("%d%d", &n, &m);
    for(int i = 0;i<n;i++)
        scanf("%d", &v1[i]);

    for(int j = 0;j<m;j++)
        scanf("%d", &v2[j]);
    
    vec(v1, n, v2, m, v3, &k);

    if(k != 0)
        for(int i = 0;i<k;i++)
            printf("%d ", v3[i]);
    else
        printf("Nu exista!\n");

    return 0;
}