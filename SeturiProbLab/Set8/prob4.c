#include <stdio.h>
#include <string.h>

struct timp{
    int ora;
    int minut;
    int secunda;
};

struct data{
    int zi;
    int luna;
    int an;
    struct timp moment;
};

typedef struct data DATA;

int main(){

    DATA dat1, dat2;
    // citirea datelor
    printf("Introduceti prima data: ");
    scanf("%d %d %d %d %d %d", &dat1.zi, &dat1.luna, &dat1.an, &dat1.moment.ora, &dat1.moment.minut, &dat1.moment.secunda);
    printf("Introduceti a doua data: ");
    scanf("%d %d %d %d %d %d", &dat2.zi, &dat2.luna, &dat2.an, &dat2.moment.ora, &dat2.moment.minut, &dat2.moment.secunda);

    //afisarea celor doua date frumos
    printf("Prima data este: %d/%d/%d %d:%d:%d\n", dat1.zi, dat1.luna, dat1.an, dat1.moment.ora, dat1.moment.minut, dat1.moment.secunda);
    printf("A doua data este: %d/%d/%d %d:%d:%d\n", dat2.zi, dat2.luna, dat2.an, dat2.moment.ora, dat2.moment.minut, dat2.moment.secunda);

    return 0;
}
