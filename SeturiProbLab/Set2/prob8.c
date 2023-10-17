#include <stdio.h>

int main()
{
    // char c;
    // while(scanf("%c", &c) && c != 'D' && c != 'N');

    char c;
    do
    {
        printf("Doriti sa continuati? (D/N):");
        scanf("%c", &c);
        getchar();
    } while (c != 'D' && c != 'N');
    return 0;
}