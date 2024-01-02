#include <stdio.h>
#include <string.h>

struct fig_geom
{
    char nume;
    union
    {
        int lungime;
        int latime;
        int raza;
    };
};

typedef struct fig_geom FIG_GEOM;

int main(){

    FIG_GEOM figura1;
    float perimetru, aria;
    scanf("%c", &figura1.nume);
    if(figura1.nume == 'c')
        {
            scanf("%d", &figura1.raza);
            perimetru = 2 * 3.14 * figura1.raza;
            aria = 3.14 * figura1.raza * figura1.raza;
        }
    else
        {
            if(figura1.nume == 'p')
                {
                    scanf("%d", &figura1.lungime);
                    figura1.latime = figura1.lungime;
                    perimetru = 4 * figura1.lungime;
                    aria = figura1.lungime * figura1.lungime;
                }
            else if(figura1.nume == 'd')
                {
                    scanf("%d", &figura1.lungime);
                    scanf("%d", &figura1.latime);
                    perimetru = 2 * (figura1.lungime + figura1.latime);
                    aria = figura1.lungime * figura1.latime;
                }
                else
                    printf("Figura geometrica nu exista");       
        }
            
    //afisam permietrul si aria figurii geometrice
    printf("Perimetru: %.2f\n", perimetru);
    printf("Aria: %.2f\n", aria);

    return 0;
}
