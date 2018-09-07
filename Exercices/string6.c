#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string6.h"

void string6()
{
    int i, nbe;
    i = nbe = 0;
    char texte[10];
    printf("Veuillez saisir un texte: ");
    __fpurge(stdin);
    fgets(texte, 10, stdin);
    do
    {
        if(texte[i]=='e')
            nbe++;
        i++;
    }while( i < 10+1);
    printf("\nIl y a %d 'e' dans votre texte", nbe);
}
