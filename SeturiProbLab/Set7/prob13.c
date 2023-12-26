#include <stdio.h>
#include <string.h>

void stergere(char a[], int p, int q)
{
    printf("Bro stergerea a fost apelata\n");
    int n = strlen(a);
    for (int i = p; i <= n - q; i++)
    {
        a[i] = a[i + q + 1];
    }
}

void inserare(char a[], char b[], int p)
{
    printf("Bro inserarea a fost apelata\n");
    int n = strlen(a);
    int m = strlen(b);
    for (int i = n; i >= p; i--)
    {
        a[i + m] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        a[p + i] = b[i];
    }
    
}

int main(){

    char a[100], b[100], c[100];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    for (int i = 0;i<strlen(a);i++)
    {
        if (a[i] == b[0])
        {
            int ok = 1;
            for (int j = 1;j<strlen(b);j++)
            {
                if (a[i + j] != b[j])
                {
                    ok = 0;
                    break;
                }
            }
            if (ok == 1)
            {
                stergere(a, i, strlen(b) - 1);
                printf("%s\n", a);
                inserare(a, c, i);
                printf("%s\n", a);
            }
        }
    }

    printf("%s", a);
    return 0;
}