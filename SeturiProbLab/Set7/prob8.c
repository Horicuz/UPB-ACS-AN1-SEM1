#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    if(strlen(a) > strlen(b))
        {
            int j = 0;
            for (int i = strlen(a) - strlen(b); i<strlen(a); i++)
            {   
                if(a[i] != b[j])
                {
                    printf("Nu e suxfix\n");
                    return 0;
                }
                j++;
            }
        }
    else
        {
            int j = 0;
            for (int i = strlen(b) - strlen(a); i<strlen(b); i++)
            {   
                if(b[i] != a[j])
                {
                    printf("Nu e suxfix\n");
                    return 0;
                }
                j++;
            }
        }
    
    printf("E suxfix\n");
    return 0;
}