#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100][100];
    int frv[26];
    int n;
    int con = 0;

    scanf("%d", &n);
    getchar();
    gets(s[0]);
    for(int i = 0;i<strlen(s[0]);i++)
    {
        int a = 122 - s[0][i];
        frv[a] ++;
    }
    int frvm[26];
    for(int i = 1;i<n;i++)
    {
        gets(s[i]);

        for(int z = 0;z<26;z++)
            frvm[z] = 0;
        for(int j = 0;j<strlen(s[i]);j++)
        {
            int a = 122 - s[i][j];
            frvm[a] ++;
        }
        int ok = 1;
        for(int z = 0;z<26;z++)
            {   
                if(frv[z] != frvm[z])
                {
                    ok = 0;
                    break;

                }
            }
        if(ok == 1)
        {
            con++;
        }
    }

    printf("Avem %d anagrame\n", con);


    return 0;
}    
