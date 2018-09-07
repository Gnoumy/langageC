#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structure2.h"

void structure2()
{
    struct produit p1;
    struct produit p2={2,"Ecran", 1000, 99.99};

    p1.numero=10;
    strcpy(p1.designation, "Souris"); //strcpy nécessaire pour affecter la valeur Souris
    p1.prix=19.99;

    printf("Saisir la quantité: ");
    scanf("%d", &p1.qte);

    printf("\nRéf: %d", p1.numero);
    printf("\nDésignation: %s", p1.designation);
    printf("\nPrix: %f", p1.prix);
    printf("\nQuantité %d", p1.qte);

    printf("\nRéf: %d", p2.numero);
    printf("\nDésignation: %s", p2.designation);
    printf("\nPrix: %f", p2.prix);
    printf("\nQuantité %d", p2.qte);

    /************* Déclaration du contenu de la structure  ****************/
    struct produit tProd[5]=
        {
            {5, "Clavier", 100, 15.99},
            {25, "souris", 100, 15.99},
            {105, "Carte mère", 100, 15.99},
            {85, "Smartphone", 100, 15.99},
            {12, "Stylo", 100, 15.99}
        };
    /********************************* FIN  ******************************/

    /************** Affichage du contenu de la structure  ****************/
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("\n%s", tProd[i].designation);
    }
    /********************************* FIN  ******************************/

    /********************  Pointeur de la structure  *********************/
    struct produit *ptProd=NULL;
    ptProd = &p2;
    (*ptProd).numero = 55;
    tProd->qte = 222;

    printf("\Ref: %d Qte: %d",
        ptProd->numero,
        ptProd->qte
    );
    /********************************* FIN  ******************************/


}
