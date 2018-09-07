#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lettre
{
    char car;
    struct Lettre *pSuivant;
};

typedef struct Lettre LETTRE;

int main()
{
    char lettreSaisie;
    LETTRE *pDebut = NULL;//pointeur vers le premier élément
    LETTRE *ptmp = NULL;
    int choix;
    do{
        printf("\t\t --- MENU ---");
        printf("\n1 - Ajouter (en fin de liste)");
        printf("\n2 - Afficher");
        printf("\n3 - Purger");
        printf("\n4 - Ajouter en début");
        printf("\n9 - Fin");
        printf("\nVotre choix: ");
        fflush(stdin);
        scanf("%d", &choix);
        switch(choix)
        {
            case 1:
                printf("\nSaisir une lettre: ");
                fflush(stdin);
                scanf(" %c", &lettreSaisie);
                if(pDebut == NULL)
                {
                    pDebut = (LETTRE *)malloc(sizeof(LETTRE));
                    pDebut->car = lettreSaisie; // Ecriture équivalente: (*pDebut).car = lettreSaisie;
                    pDebut->pSuivant = NULL;
                }else{
                    ptmp = pDebut;
                    while( ptmp->pSuivant != NULL)
                    {
                        ptmp = ptmp->pSuivant;
                    }
                    ptmp->pSuivant  = (LETTRE *)malloc(sizeof(LETTRE));
                    ptmp = ptmp->pSuivant;
                    ptmp->car = lettreSaisie;
                    ptmp->pSuivant  = NULL;
                }
                break;
            case 2:
                ptmp=pDebut;
                if(ptmp == NULL)
                {
                    printf("\nLa liste est vide\n");
                    break;
                }
                while(ptmp != NULL)
                {
                    printf("%c", ptmp->car);
                    ptmp = ptmp->pSuivant;
                }
                break;
            case 3:
                printf("\nVider la liste");
                while(ptmp != NULL)
                {
                    printf("\nLettre supprimée: %c", ptmp->car);
                    pDebut = ptmp->pSuivant; //pDebut prend la valeur de pSuivant
                    free(ptmp); //libère le pointeur qui pointe vers l'élément
                    ptmp = pDebut;
                }
                printf("\nListe purgée");

                break;
            case 4:
                printf("\nSaisir caractère: ");
                fflush(stdin);
                scanf(" %c", &lettreSaisie);
                ptmp = (LETTRE *)malloc(sizeof(LETTRE)); //on affecte à ptmp la créa
                ptmp->car = lettreSaisie; //lettreSaisie est stockée dans l'adresse de la structure ptmp
                ptmp->pSuivant = NULL; // le pointeur ptmp->suivant est initialisé à NULL
                if(pDebut == NULL)
                {
                    pDebut = ptmp;
                    ptmp->pSuivant = NULL; //pointeur courant équivalent à NULL
                }else{
                    ptmp->pSuivant = pDebut;
                    pDebut = ptmp; // ptmp contient l'adresse de l'espace mémoire allouée
                }

                break;
            case 9:
                return 0;
            default:
                printf("\nOption invalide !!!");
        }

    }while(choix != 9);

    return 0;
}
