#include <stdio.h>

int main(){

    // int n;
    // while(scanf("%d", &n) && n<0);

    int n = -1;
    do{
        scanf("%d", &n);
    }while(n<0);

    return 0;
}