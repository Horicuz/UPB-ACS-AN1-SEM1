#include <stdio.h>
 
int main()
{
 
    char c,c2;
    scanf("%c",&c);
    printf("Codul ASCII al caracterului %c=%d\n",c,c);
    printf("Urmatorul caracter in ordine lexicografica este %c\n",c+1);
    c2='a';
    printf("%c%c%c%c%c\n",c2,c2+1,c2+2,c2+3,c2+4);
    printf("%c",'A'+15);
    return 0;
 
}