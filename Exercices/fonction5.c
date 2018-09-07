#include <stdio.h>
#include <string.h>
#include "fonction5.h"

char c = '+';
void fonction5()
{
    float nb1, nb2, resultat;
    resultat = 0;
    printf("Premier nombre: ");
    scanf("%f", &nb1);
    printf("Deuxième nombre: ");
    scanf("%f", &nb2);
    if(c == '+')
    {
        resultat = nb1 + nb2 ;
    }

    printf("Résultat: %f", resultat);

}
