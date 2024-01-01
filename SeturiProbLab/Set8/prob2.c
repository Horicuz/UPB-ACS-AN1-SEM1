#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct timp {
    int ora;
    int minut;
    int secunda;
};

typedef struct timp TIMP;

TIMP sum(TIMP t1, TIMP t2) {
    TIMP t3;
    t3.ora = t1.ora + t2.ora;
    t3.minut = t1.minut + t2.minut;
    t3.secunda = t1.secunda + t2.secunda;

    if (t3.secunda >= 60) {
        t3.secunda -= 60;
        t3.minut++;
    }
    if (t3.minut >= 60) {
        t3.minut -= 60;
        t3.ora++;
    }
    if (t3.ora >= 24) {
        t3.ora -= 24;
    }
    return t3;
}
int main(){

    TIMP t1, t2;
    printf("Introduceti timpul 1: ");
    scanf("%d %d %d", &t1.ora, &t1.minut, &t1.secunda);
    printf("Introduceti timpul 2: ");
    scanf("%d %d %d", &t2.ora, &t2.minut, &t2.secunda);

    TIMP t3;
    t3 = sum(t1, t2);
    printf("Suma timpilor este: %d:%d:%d\n", t3.ora, t3.minut, t3.secunda);

    return 0;
}
