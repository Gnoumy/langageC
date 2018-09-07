#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

#include "Harmonique.h"
#include "Exercice12.h"
#include "Exercice13.h"
#include "TableauxV2.h"
#include "TableauxV3.h"
#include "TableauxV5.h"
#include "pointeur.h"
#include "fonction4.h"
#include "fonction5.h"
#include "fonction7.h"
#include "string3.h"
#include "string4.h"
#include "string6.h"
#include "string7.h"
#include "structure1.h"
#include "structure2.h"
#include "structure3.h"
#include "structure4.h"
#include "structure6.h"
#include "file.h"
#include "file2.h"


void menu()
{
int choix;
do
{
        printf("\n************************************");
        printf("\n [0] - Sortir du programme");
        printf("\n [1] - Exercice - suite harmonique");
        printf("\n [2] - Exercice 12");
        printf("\n [3] - Exercice 13");
        printf("\n [4] - Tableaux V.2");
        printf("\n [5] - Tableaux V.3");
        printf("\n [6] - Tableaux V.5");
        printf("\n [7] - Pointeur");
        printf("\n [8] - Fonction v4");
        printf("\n [9] - Fonction v5");
        printf("\n[10] - Fonction v7 et v8");
        printf("\n[11] - String v3");
        printf("\n[12] - String v4");
        printf("\n[13] - String v6");
        printf("\n[14] - String v7");
        printf("\n[15] - Structure 1");
        printf("\n[16] - Structure 2");
        printf("\n[17] - Structure 3");
        printf("\n[18] - Structure 4");
        printf("\n[19] - Structure 6");
        printf("\n[20] - Fichier");
        printf("\n[21] - Fichier 2");
        printf("\n************************************\n");
        __fpurge(stdin);
        printf("Quel exercice voulez vous exécuter ? ");
        scanf("%d", &choix);
        switch (choix)
        {
            case 0:
                break;
            case 1:
                harmonique();
                break;
            case 2:
                exercice12();
                break;
            case 3:
                exercice13();
                break;
            case 4:
                tableauxV2();
                break;
            case 5:
                tableauxV3();
                break;
            case 6:
                tableauxV5();
                break;
            case 7:
                pointeur();
                break;
            case 8:
                fonction4();
                break;
            case 9:
                fonction5();
                break;
            case 10:
                fonction7();
                break;
            case 11:
                string3();
                break;
            case 12:
                string4();
                break;
            case 13:
                string6();
                break;
            case 14:
                string7();
                break;
            case 15:
                structure1();
                break;
            case 16:
                structure2();
                break;
            case 17:
                structure3();
                break;
            case 18:
                structure4();
                break;
            case 19:
                structure6();
                break;
            case 20:
                fichier();
                break;
            case 21:
                fichier2();
                break;
            default:
                printf("\nErreur de saisie, veuillez recommencer\n");
        }
    }while (choix != 0);
}

//void menu2()
//{
//
//
//
//}

