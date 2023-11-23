#include <stdio.h>

void linie(double a[][100], int n, int m, int* i)
{
    double maxsum = 0;
    for(int j = 0;j<m;j++)
        maxsum = maxsum + a[0][j];
    *i = 0;
    for(int s = 1;s<n;s++)
        {   double sum = 0;
            for(int j = 0;j<m;j++)
                sum = sum + a[s][j];
            if(sum > maxsum)    
                {
                    maxsum = sum;
                    *i = s;
                }      
        }
            
}

void coloana(double a[][100], int n, int m, int* i)
{
    double maxsum = 0;
    for(int j = 0;j<n;j++)
        maxsum = maxsum + a[j][0];
    *i = 0;
    for(int s = 1;s<m;s++)
        {   double sum = 0;
            for(int j = 0;j<n;j++)
                sum = sum + a[j][s];
            if(sum > maxsum)    
                {
                    maxsum = sum;
                    *i = s;
                }      
        }
}


int main()
{
    double a[100][100];
    int n,m;
    int lmax, colmax;

    scanf("%d%d", &n, &m);
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            scanf("%lf", &a[i][j]);
    
    linie(a, n,m, &lmax);
    coloana(a, n, m, &colmax);

    printf("%d %d", lmax, colmax);
    
    return 0;
    
}