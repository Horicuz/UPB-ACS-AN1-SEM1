#include <stdio.h>

int main()
{
    int v[100];
    int n;
    int des = 1;
    int cr = 1;

    scanf("%d", &n);
    for (int i = 0; i < n;i++)
        {
            scanf("%d", &v[i]);
            if(i >= 1)
                {   
                    if(des != 0 || cr != 0 )
                    {
                        if(v[i] > v[i-1])
                        {
                            des = 0;
                        }

                        if(v[i] < v[i-1])
                        {
                            cr = 0;
                        }
                    }

                    else
                    {
                        printf("oarecare");
                        return 0;
                    }
                }
        }
    if(des == 1 && cr == 1)
        {
            printf("constant");
            return 0;
        }
    if(des == 1 && cr == 0)
        {
            printf("descrescator");
            return 0;
        }
    if(des == 0 && cr == 1)
        {
            printf("crecator");
            return 0;
        }
    
    

}
