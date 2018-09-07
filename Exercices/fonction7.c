#include <stdio.h>
#include "fonction7.h"
#include <stdbool.h>

void fonction7()
{
    int nb;
    printf("Veuillez saisir un nombre: ");
    scanf("%d", &nb);

    entier(nb);
    multiple(nb);
    divisible(nb);
}

void entier(int nb)
{
    if(nb % 2 == 0)
    {
        printf("Il est pair \n");
    }
}

void multiple(int nb)
{
    if(nb % 3 == 0)
    {
        printf("Il est multiple de 3 \n");
    }
}

void divisible( int nb)
{
    if(nb % 6 == 0)
    {
        printf("Il est divisible par 6 \n");
    }
}



