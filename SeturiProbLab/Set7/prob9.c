#include <stdio.h>
#include <string.h>
#include <stdio.h>

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

    int n = strlen(a);
    for (int i = 0;i<n;i++)
    {
        if(isVowel(a[i]) == 1)
        {   
            //it's a vowel
            n--;
            for (int j = i; j < n;j++)
            {
                a[j] = a[j+1];
            }
            i--;
        }
    
    }
    printf("/n");
    printf("The new string is: ");
    for (int i = 0; i < n;i++)
    {
        printf("%c", a[i]);
    }

    int p, q;
    scanf("%d", &p);
    scanf("%d", &q);

    char subsir[100];
    int k = 0;
    for (int i = p;i<=q;i++)
    {
        subsir[k++] = a[i];
    }

    printf("The substring is: ");
    for (int i = 0; i < k;i++)
    {
        printf("%c", subsir[i]);
    }

        return 0;

}