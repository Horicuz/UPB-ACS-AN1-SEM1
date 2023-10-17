#include <stdio.h>

int main()
{

    int a;
    scanf("%d", &a);

    //metoda cu if
    if(a<=7 && a>=1)
    {
        if(a == 1)
            printf("Luni");
        else if(a == 2)
            printf("Marti");
        else if(a == 3)
            printf("Miercuri");
        else if(a == 4)
            printf("Joi");
        else if(a == 5)
            printf("Vineri");
        else if(a == 6)
            printf("Sambata");
        else if(a == 7)
            printf("Duminica");
    }        
        else
            printf("EROARE");                
    
    printf("\n\n\n");

    //metoda cu switch
    switch(a)
    {
        case 1: printf("LUNI"); break;
        case 2: printf("MARTI"); break;
        case 3: printf("MIERCURI"); break;
        case 4: printf("JOI"); break;
        case 5: printf("VINERI"); break;
        case 6: printf("SAMBATA"); break;
        case 7: printf("DUMINICA"); break;
        default: printf("eroare"); break;

    }

    return 0;
}
