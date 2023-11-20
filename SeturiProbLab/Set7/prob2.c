#include <string.h>
#include <stdio.h>

int main()
{
    int lenght;
    char sir[100];

    gets(sir);
    lenght = strlen(sir);

    for(int i = 0;i<lenght;i++)
    {
        printf("%c", sir[i]);
    }

    return 0;
}