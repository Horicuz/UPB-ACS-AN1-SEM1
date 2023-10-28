#include <stdio.h>

int main()
{
    int v[100];
    int n;
    int sum = 0;
    int m = 999999999;

    scanf("%d", &n);
    for (int i = 0; i < n;i++)
        {
            scanf("%d", &v[i]);
            sum += v[i];
            if(v[i] < m)
                {
                    m = v[i];
                }
        }
   if((float)sum/(float)n != sum/n)
        {
            printf("Numarul %f nu se regaseste prin vector\n", (float)sum / (float)n);
        }
    else
        {
            float k = (float)sum / (float)n;
            for(int i = 0; i < n;i++)
                {
                    if(k == v[i])
                    {
                        printf("Numarul %f se regaseste in vector pe pozitia %d\n", k, i + 1);
                    }
                }
        }
    printf("Minimul din vector este %d si acesta se regaseste pe pozitiile: ", m);
    for (int i = 0; i < n; i++)
        {
            if(v[i] == m)
            {
                printf("%d ", i+1);
            }
        }

    return 0;
}