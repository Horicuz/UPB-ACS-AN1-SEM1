#include <stdio.h>
#include <math.h>

int deltaw(int a, int b, int c)
{
    int d = (b * b) - (4 * a * c);
    return d;
}

void rezultat(int a, int b, int c, float* x1, float* x2, int *l)
{
    *l = 1;
    int deltas = deltaw(a, b, c);
    if (deltas < 0)
        {
            *l = 0;
        }
    else
        {    
            float radd = sqrt(deltas);
            *x1 = ((float) (-b) + radd)/ (float) (2*a);
            *x2 = ((float) (-b) - radd)/ (float) (2*a);
        }
}


int main()
{
    int a, b, c,l;
    float x1, x2;

    scanf("%d%d%d", &a, &b, &c);
    rezultat(a, b, c, &x1, &x2, &l);
    if(l == 0)
            printf("ECUATIA NU ARE SOLUTII REALE\n");
    else
        printf("x1 = %f\nx2 = %f\n", x1, x2);
    return 0;
} 
