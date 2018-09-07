#include <stdio.h>
#include "pointeur.h"

void pointeur()
{

    int x = 20;
    int *pt = NULL;

    pt = &x;
    printf("%d \n", pt);        // affichera l'adresse mémmoire
    printf("%d \n", *pt);       // affichera 20
    printf("%d \n", *pt + 1);   // affichera 21
    printf("%d \n", pt + 1);    // affichera l'adresse mémoire + 4 octets

    int t[5]= {10,20,30,40,50};
    int *pointeur=NULL;
    pointeur=&t[0];
    printf("%d \n", *pointeur);     //affichera 10
    printf("%d \n", *(pointeur+1)); //affichera 20

    for(pointeur = t; pointeur < (t + 5); pointeur++)
    {
        printf("%d \n", *pointeur);
    }

//    int t2[3][4] =
//                {
//                    {10,20,30,40},
//                    {100,200,300,400},
//                    {1,2,3,4}
//                };

}
