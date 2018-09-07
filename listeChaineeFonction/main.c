#include <stdio.h>
#include <stdlib.h>
#include "entete.h"

int main()
{
    int choix;
    char lettreSaisie;
    LETTRE *pDebut = NULL;//pointeur vers le premier élément
//    LETTRE *ptmp = NULL;

    do{
        printf("\n[1] - Ajouter au début");
        printf("\n[2] - Ajouter à la fin");
        printf("\n[3] - Afficher la liste chainée");
        printf("\n[4] - Supprimer un caractère");
        printf("\n[5] - Purger la liste");
        printf("\n[0] - Exit");
        printf("\nSaisir voitre choix: ");
        fflush(stdin);
        scanf(" %d", &choix);
        switch(choix)
        {
            case 1:
//                pDebut = *ajouterDebut(pDebut);
                break;
            case 2:
//                pDebut = *ajouterFin(pDebut);
                break;
            case 3:
                afficher(pDebut);
                break;
            case 4:
                supprimerCar();
                break;
            case 5:
                purger();
                break;

            default:
                printf("Erreur de saisie");
                continue;
        }

    }while(choix != 0);

    return 0;
}
