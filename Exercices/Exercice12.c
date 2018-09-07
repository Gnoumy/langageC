#include <stdio.h>
#include "Exercice12.h"

void exercice12()
{
    int n, x, y, z;

    printf("Veuillez saisir le nombre de lignes: ");
    scanf("%d", &n);
    for(x=0;x<n;x++)
    {
        for(y=0;y<(n-x);y++)
        {
            printf(" ");
        }
        for(z=0;z<1 + 2 * x;z++)
        {
            printf("*");
        }
        printf("\n");
    }
}
