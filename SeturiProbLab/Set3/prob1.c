#include <stdio.h>

int v[100];

int main()
{
    int n;
    int prag;
    printf("Numarul de elemente:\n");
    scanf("%d", &n);
    printf("Pragul:\n");
    scanf("%d", &prag);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &v[i]);
        if(v[i] > prag)
            printf("Numarul %d de pe pozitia %d din vector a depasit pragul\n", v[i],i);
        if(i%2 == 0)
            printf("Numarul %d se afla pe o pozitie para\n\n", v[i]);

        int k = 2;
        if(v[i] == 1)
        {
            printf("Asta are doar 1 divizor\n");
            continue;
        }
        for(int z = 2; z*z<= v[i]; z++)
        {
            if(v[i] % z == 0)
                k=k+2;
            if(z*z == v[i])
                k=k-1;
        }
        printf("v[%d] adica %d are %d divizori\n\n",i,v[i],k);

    }
    for(int i = 0;i<n;i++)
    {
        printf("%d ", v[i]);
    }
printf("\n\n\n");
    for(int i = 0;i<n;i++)
    {
        if(v[i] == 0)
        {
            for(int j = i; j<n; j++)
                v[j] = v[j+1];
            i = i - 1;
            n=n-1;
        }
    }

    for(int i = 0;i<n;i++)
    {
        printf("%d ", v[i]);
    }

}

