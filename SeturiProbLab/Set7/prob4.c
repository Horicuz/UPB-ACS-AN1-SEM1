#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100], u[100];
    int n,m,p;

    scanf("%s", s);
    scanf("%s", t);
    scanf("%s", u);

    m = strlen(t);
    p = strlen(u);
    
    for(int i = 0;i<m;i++)
        s[strlen(s)] = t[i];
    for(int i = 0;i<p;i++)
        s[strlen(s)] = u[i];
    
    printf("%s\n", s);
    
    return 0;
}