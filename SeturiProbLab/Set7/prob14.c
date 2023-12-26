#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100];
    int frecv[100];
    char s[100][100];

    fgets(a, 100, stdin);
    int j = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int k = 0;
        while (a[i] != ' ')
        {
            s[j][k++] = a[i++];
        }
        frecv[j] = 1;
        printf("%s\n", s[j]);
        j++;
    }

    for (int i = 0; i <= j; i++)
    {
        for (int z = i + 1; z <= j; z++)
            if (strcmp(s[i], s[z]) == 0)
            {
                frecv[i]++;
                frecv[z]++;
            }
        printf("%s %d\n", s[i], frecv[i]);
    }
    return 0;
}
