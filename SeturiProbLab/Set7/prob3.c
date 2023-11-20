#include <stdio.h>
#include <string.h>

int main()
{
    char nume1[25];
    char nume2[25];
    int varsta1;
    int varsta2;

    scanf("%s%s", nume1, nume2);
    scanf("%d%d", &varsta1, &varsta2);
    int ok = 1;
    int l = strlen(nume1);
    int i = 0;
    while(i<=l)
    {   
        if(nume1[i] != nume2[i])
            {
                ok = 0;
                break;
            }
        i++;
    }

    if(ok == 0)
    {
        if(varsta1 > varsta2)
            printf("%s", nume2);
        else 
            if(varsta1 < varsta2)
                printf("%s", nume1);
            else printf("%s\n%s\n", nume1, nume2);
    }

    return 0;

}