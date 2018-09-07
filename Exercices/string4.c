#include <stdio.h>
#include "string4.h"

void string4()
{
    int jour;
    char *tab[7]={"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    do
    {
        printf("Veuillez saisir un nombre entier entre 1 et 7: ");
        scanf("%d", &jour);
        printf("%s \n", tab[jour-1]);

    }while(jour >= 1 && jour <=7);
}
