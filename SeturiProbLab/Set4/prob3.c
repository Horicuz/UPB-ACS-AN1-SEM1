#include <stdio.h>

int main()
{
    int v[100];
    int n;
    int m = 0;
    int ml = 1;
    int mi = 0;

    scanf("%d", &n);
    for (int i = 0; i < n;i++)
        {
            scanf("%d", &v[i]);
            if(i > 0)
            {   
                if(v[i] < v[i-1])
                    {
                        if(ml > m)
                            {
                                m = ml;
                                mi = i - ml;
                            }
                        ml = 1;
                    }
                else
                {
                    ml++;
                }
            }   
        }
        printf("Cea mai lunga secventa de numere consecutive ordonate crescator are lungimea %d\niar elementele ei sunt: ", m);
        for (int i = mi; i < (mi + m); i++)
            {
                printf("%d ", v[i]);

            }

            return 0;
}