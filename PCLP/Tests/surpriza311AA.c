#include <stdio.h>

int powe(int n, int v)
{
    int a = 1;
    for(int i = 1;i<=v;i++)
        {
           a = a * n;
        }
    return a;
}

void vec(int n, int *m, int *k)
{   
    int  a = n;
    int  con = 0;
    *m = 0;
    *k = 0;
    int v[6];
    int l = 0;
    while(a!=0)
    {
        a = a/10;
        con++;
    }
    for(int i = con-1;i>=0;i--)
    {
        int putere  = (int)powe(10,i);
        v[l++] = (n / putere)%10;
    }

    for(int i = 0;i<l;i++)
    {
        int ok = 1;
        for(int j = 0;j<i;j++)
            if(v[i] == v[j])
                {
                    ok = 0;
                    break;
                }
        if(ok == 1)
        {
            (*m) = ((*m)+v[i])*10;
            (*k) ++;
        }
    }
    (*m) = (*m) / 10;
}

int main()
{
    int n,m,k;
    scanf("%d", &n);

    vec(n,&m, &k);
    printf("%d %d", m, k);
    return 0;

}
