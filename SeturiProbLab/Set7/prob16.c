#include <stdio.h>
#include <string.h>
#include <ctype.h>

void smecherie(char s[100])
{
    int n = strlen(s);  
    for (int i = 0;i<n;i++)
    {   
        if(i%2 == 0 && isalpha(s[i]) && isalpha(s[i+1]))
        {
            char aux = s[i];
            s[i] = s[i + 1];
            s[i + 1] = aux;
        }
    }
}
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    smecherie(s);
    printf("%s", s);
    return 0;
}
