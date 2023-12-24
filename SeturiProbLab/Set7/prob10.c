#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c)
{ 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1; // Character is a vowel
    }
    else
    {
        return 0; // Character is a consonant
    }
}


int main()
{
    char a[100];
    scanf("%s", a);
    for(int i = 0; i < strlen(a); i++)
    {
        if(isVowel(a[i]) == 1)
        {
           a[i] = toupper(a[i]);
        }
    }
    printf("\n");
    printf("%s", a);
    return 0;
}