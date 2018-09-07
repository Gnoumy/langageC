#include <stdio.h>
#include "TableauxV5.h"

void tableauxV5()
{
    long som = 0;
    int ligne, colonne;
    int t[3][4] =
                {
                    {10,20,30,40},
                    {100,200,300,400},
                    {1,2,3,4}
                };

    for( ligne=0; ligne<3; ligne++)
    {
        for(colonne=0; colonne<4; colonne++)
        {
            som+= t[ligne][colonne];
        }
    }
    printf("Somme: %ld", som);
}
