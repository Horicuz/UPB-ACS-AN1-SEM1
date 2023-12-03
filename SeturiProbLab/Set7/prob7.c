//prob7
#include <stdio.h>
#include <string.h>

FILE *text;

int main()
{
    char s[100];
    text = fopen("text.txt", "r");
    fgets(s, 100, text);
    for (int i = 0; i < strlen(s);i++)
    {
        if(s[i] != ' ')
        {
            if(s[i] == 'z')
            {
                s[i] = 'a';
            }
            else
            {
                s[i] = s[i] + 1;
            }
        }
        printf("%c", s[i]);
    }
    fclose(text);
    return 0;

}
