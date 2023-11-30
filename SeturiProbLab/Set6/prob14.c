#include <stdio.h>
#include <stdlib.h>

void sortare_para(int *p, int n)
{
    for(int i = 0;i<n;i++)
        {
            if(*(p+i)%2==0)

                for(int j = i+1;j<n;j++)

                    if(*(p+j)%2 == 0)

                        if(*(p+i)>*(p+j))
                        {
                            int temp = *(p+i);
                            *(p+i) = *(p+j);
                            *(p+j) = temp;
                        }
        }
}


int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int *p = (int*)malloc(sizeof(int)*n*m);
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            scanf("%d", p+i*m+j);

    for(int i = 0;i<n;i++)
        if((i+1)%2==0)
            sortare_para(p+i*m, m);
    
    printf("The matrix after the sort:\n");
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            printf("%d ", *(p+i*m+j));
        printf("\n");
    }

    free(p);

    return 0;




}