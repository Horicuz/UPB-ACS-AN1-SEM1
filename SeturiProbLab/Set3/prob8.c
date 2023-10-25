#include <stdio.h>

int main()
{
    int m,n;
    int p,q;
    int a[100][100];
    int b[100][100];

    printf("Introduceti m si n:\n\n");
    scanf("%d%d", &m,&n);
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            scanf("%d", &a[i][j]);

    printf("Introduceti p si q:\n\n");
    scanf("%d%d", &p,&q);
    for(int i = 0;i<p;i++)
        for(int j = 0;j<q;j++)
            scanf("%d", &b[i][j]);

    if(n == p && m == q)
        {
            for(int i = 0;i<n;i++)
                { 
                    for(int j = 0;j<m;j++)
                        printf("%d ", a[i][j] + b[i][j]);
                    printf("\n");
                }
        }
    else 
    {
        printf("Nu se poate efectua adunarea!\n");
    }    

    if(m == p)
        {
            for(int i = 0;i<n;i++)
                {
                    for(int j = 0;j<m;j++)
                    {   
                        int ip = 0;
                        int jp = 0;
                        
                        int sum = 0;
                        for(int z = 0;z<m;z++)
                            {
                                sum = sum + a[i][jp] * b[ip][j];
                                ip++;
                                jp++;
                            }
                        printf("%d ", sum);    
                    }
                    printf("/n");
                }    
        }
    else
        printf("Nu se poate efectua inmultirea!");
    return 0;   

}
