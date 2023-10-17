#include <stdio.h>

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}

int main(){
    int n, k = 0;
    scanf("%d", &n);

    while(1){
        int termen = fib(k);
        if(termen > n) break;
        else printf("%d ", termen), k++;
    }

    return 0;
}