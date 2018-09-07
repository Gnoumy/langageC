#include <stdio.h>
#include "Harmonique.h"

void harmonique()
{
    float n = 0;
    printf("Veuillez saisir un nombre: ");
    scanf("%f", &n);
    float somme = 0;
    float expo = 1;
    for (; expo <= n; expo++)
    {
        somme = somme + (1./expo);
    }
    printf("Résultat: %f", somme);
}
