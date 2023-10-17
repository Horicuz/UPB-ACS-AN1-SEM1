#include <stdio.h>

int main(){

    int aux = -1;
    int pos = 0, neg = 0;

    do{
        scanf("%d", &aux);
        if(aux > 0) pos++;
        if(aux < 0) neg++;
    } while(aux != 0);

    printf("Pozitive: %d\nNegative: %d\n", pos, neg);

    return 0;
}