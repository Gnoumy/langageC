#include <stdio.h>
#include "fonction4.h"

void fonction4()
{
    float nb1, nb2;
    char c;

    printf("Veuillez saisir le 1 nombre: ");
    scanf("%f", &nb1);
    printf("Veuillez saisir le 2 nombre: ");
    scanf("%f", &nb2);
    printf("Veuillez saisir une opérande: ");
    scanf(" %c", &c);
    calcul(nb1, nb2, c);
}

void calcul(float nb1, float nb2, char c)
{
    float resultat = 0.0;
    switch (c)
    {
        case '+':
            resultat = nb1 + nb2;
            break;
        case '-':
            resultat = nb1 - nb2;
            break;
        case '/':
            resultat = nb1 / nb2;
            break;
        case '*':
            resultat = nb1 * nb2;
            break;
        default:
            resultat = nb1 + nb2;
            break;
    }
    printf("Résultat: %f", resultat);

//    return 0;
}
