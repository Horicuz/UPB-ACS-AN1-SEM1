#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100];

    fgets(a, 100, stdin);
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i+1] == ' ' || a[i-1] == ' ' || i == 0 || i == strlen(a) - 1)
        {
            a[i] = toupper(a[i]);
        }
    }

    for(int i = 0; i < strlen(a); i++)
    {
        printf("%c", a[i]);
    }  
    
    return 0;
}