#include <stdio.h>

void interschimbare(int n, int v[])
{
    int k;
    for(int i = 0; i<n; i++)
        for(int j = i+1; j<n; j++)
        {
            if(j == n)
            {
                i = n;
                break;
            }
            if(v[j] > v[i])
            {
                k = v[i];
                v[i] = v[j];
                v[j] = k;

            }
        }
}

void selectie(int n, int v[])
{
    int k;
    for(int i = 0; i<n; i++)
    {
        int m = -999999999;
        int mi;
        for(int j = i; j<n; j++)
        {
            if(v[j] > m)
                {
                    m = v[j];
                    mi = j;
                }
        }
        if(v[i] < m)
            {
                k = v[i];
                v[i] = v[mi];
                v[mi] = k;
            }

    }



}



int main()
{
    int v[100];
    int n;
    scanf("%d", &n);
    for(int i =0; i<n; i++)
        scanf("%d", &v[i]);

    selectie(n, v);

    for(int i =0; i<n; i++)
        printf("%d ", v[i]);




}
