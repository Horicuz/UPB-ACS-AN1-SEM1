#include <stdio.h>

int prim(int nr){
    if(nr <= 1) return 0;
    else for(int d=2; d<=nr/2; d++){
        if(nr%d == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);

    if(prim(n)) printf("E prim");
    else printf("Nu e prim");

    printf("\n");

    return 0;
}