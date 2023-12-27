#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100];
    fgets(s, 100, stdin);
    char *p = strtok(s, " ");
    int count = 0;
    while(p != NULL)
    {
        count++;
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
    printf("\n");
    printf("%d", count);
    return 0;
}
