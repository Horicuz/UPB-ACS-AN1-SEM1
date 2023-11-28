#include <stdio.h>

typedef struct nr_complex
{
    int real;
    int imag;

}nr_complex;

nr_complex suma(nr_complex nr1, nr_complex nr2)
{
    nr_complex sum;
    sum.real = nr1.real + nr2.real;
    sum.imag = nr1.imag + nr2.imag;

    return sum;
}


int main()
{
    nr_complex nr1, nr2, sum;
    printf("Enter the real and imaginary part of the first number: ");
    scanf("%d %d", &nr1.real, &nr1.imag);
    printf("Enter the real and imaginary part of the second number: ");
    scanf("%d %d", &nr2.real, &nr2.imag);
    sum = suma(nr1, nr2);
    printf("The sum of the two numbers is: %d + %di", sum.real, sum.imag);
    return 0;

}