#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z') printf("E litera mare");
    else if(c >= 'a' && c <= 'z') printf("E litera mica");
    else if(c >= '0' && c <= '9') printf("E cifra");
    else printf("E alt caracter");

    printf("\n");

    return 0;
}
