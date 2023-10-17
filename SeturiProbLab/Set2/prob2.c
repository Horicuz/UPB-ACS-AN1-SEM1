#include <stdio.h>

int min(int a, int b){
    if(a > b) return b;
    else return a;
}

int main(){

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a < b+c && b < a+c && c < a+b){
        if(a==b && b==c && a==c) printf("Echilateral");
        else if(min(a,b) == min(b, c)) printf("Isoscel");
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) printf("Dreptunghic");
        else printf("Oarecare");

    }
    else printf("Nu e triunghi");

    printf("\n");

    return 0;
}