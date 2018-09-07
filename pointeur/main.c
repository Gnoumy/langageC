#include <stdio.h>
#include <stdlib.h>
#include "entete.h"

int main()
{
    int n= 4;
    S_PERS p,p2;

    p.nom ='Julien';
    p.age = 21;

    p2.nom = 'Caroline';
    p2.age = 22;
    printf("\nAge p2:  %d", p2.age);

    afficher(&p);
    afficher(&p2);
    printf("\nAge p2:  %d", p2.age);
    return 0;
}
