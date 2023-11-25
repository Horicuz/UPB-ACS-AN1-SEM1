#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    gets(s);
    for(int i = 0;i<strlen(s);i++)
        {
            for(int j = 0;j<strlen(s);j++)
                {
                    if(j!=i)
                        printf("%c", s[j]);
                }
            printf("\n");
        }
    return 0;
}