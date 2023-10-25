#include <stdio.h>

int main()
{
    int a,b;
    int c1,c2;
    int v[100][100];
    scanf("%d%d", &a,&b);
    for(int i = 0; i<a; i++)
        for(int j = 0; j<b; j++)
            scanf("%d", &v[i][j]);

    scanf("%d%d", &c1,&c2);
    c1 = c1-1;
    c2 = c2-1;

    for(int i = 0; i<a; i++)
    {
        int k = v[i][c1];
        v[i][c1] = v[i][c2];
        v[i][c2] = k;
    }
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
            printf("%d ", v[i][j]);
        printf("\n");
    }

    return 0;

}
