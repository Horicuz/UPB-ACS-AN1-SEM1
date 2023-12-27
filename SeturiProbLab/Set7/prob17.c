#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100], b[100];
    fgets(a, 100, stdin);
    fgets(b, 100, stdin);
    int ok = 0;
    for (int i = 0;i<strlen(a);i++)
    {   
       if(a[i] == b[0])
       {
           int z = 1;
           int ok1 = 1;
           for (int j = i+1;j<i+strlen(b)-1;j++)
           {
               printf("%c %c\n", a[j], b[z]);
               if(a[j] == b[z])
               {
                   z++;
               }
               else
               {
                   printf("%c nu merge cu %c\n", a[j], b[z]);
                   ok1 = 0;
                   break;
               }
           }
           printf("%d pe pozitia %d\n", ok1, i);
           if(ok1 == 1)
           {   
                printf("%d\n", i);
                ok++;
           }
       }
    }
    printf("%d\n", ok);
    if(ok == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
