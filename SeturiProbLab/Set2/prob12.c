#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for(int z = 1;z<=a;z++)
    {    
        for(int i = 1;i<=z;i++)
        {
            for(int j = 1;j<=z;j++)
            {
                printf("%d ", z);
            }
            printf("\n");
        }
    }
    
    return 0;
}
