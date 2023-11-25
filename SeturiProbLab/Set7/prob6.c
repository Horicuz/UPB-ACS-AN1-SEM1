 #include <stdio.h>
 #include <string.h>

 int main()
 {
        char s[100];
        gets(s);
        int count = 0;
        int ok = 0;
        for(int i = 0;i<strlen(s);i++)
        {   
            
            if(s[i-1] == ' ' || (i == 0))
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    ok = 1;
            if(s[i+1] == ' ' || (i == strlen(s)-1))
                {
                    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    {
                        if(ok == 1)
                        {
                            count++;
                        }
                    }
                    ok = 0;
                }

        }
        printf("%d\n", count);
        return 0;
 }