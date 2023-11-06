#include <stdio.h>

void f(char* a, char* b, char* c, int* a1, int* b1, int* c1)
{
    *a1 = 0;
    *b1 = 0;
    *c1 = 0;    
    if(*a >= 'a' && *a <= 'z')
        {   
            *a1 = 1;
            *a = *a  - 32;
        }
    if(*b >= 'a' && *b <= 'z')
        {   
            *b1 = 1;
            *b = *b  - 32;
        }
    if(*c >= 'a' && *b <= 'z')
        {   
            *c1 = 1;
            *c = *c  - 32;
        }
    
}



int main()
{
    char a,b,c;
    int a1,b1,c1;
    scanf("%c%c%c", &a, &b, &c);
    f(&a, &b, &c, &a1, &b1, &c1);
    if(a1 == 1)
        printf("%c ", a);
    else
        printf("\nNu este literea mica\n");

    if(b1 == 1)
        printf("%c ", b);
    else
        printf("\nNu este literea mica\n");

    if(c1 == 1)
        printf("%c ", c);
    else
        printf("\nNu este literea mica\n");
    
    return 0;

}
