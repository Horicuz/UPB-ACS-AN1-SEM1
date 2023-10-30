#include <stdio.h>

int main()
{
    int n;
    int v[100];

    int mx = -999999999;
    int mn = 999999999;
    int mni, mxi;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &v[i]);
        if(v[i] > mx)
        {
            mx = v[i];
            mxi = i;
        }
        if(v[i] < mn)
        {
            mn = v[i];
            mni = i;
        }
    }
    int mox, mon;
    if(mni - mxi == 1 || mxi - mni == 1)
    {
        printf("Nu se poate!!!!!!");
        return 0;
    }
    if(mni - mxi == 2 ||  mxi - mni == 2)
    {Citiţi
        for(int i = 0; i<n; i++)
        {
            printf("%d ", v[i]);
        }
        return 0;
    }
    else
    {
        if(mni > mxi)
        {
            mox = mni;
            mon = mxi;
        }
        else
        {
            mox = mxi;
            mon = mni;
        }

    }
    for(int  i = mon + 1; i < mox; i++)
    {
        int k;
        for(int j = i+1; j< mox; j++)
        {
            if(j == mox)
            {
                i = mox;
                break;
            }
            if(v[j] < v[i])
            {
                k = v[i];
                v[i] = v[j];
                v[j] = k;

            }
        }

    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ", v[i]);
    }


}
