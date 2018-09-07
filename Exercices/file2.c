#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file2.h"

void fichier2()
{
/******************  Initialisation  *******************/
    char nomFichier[LG+1];
    FILE *sortie=NULL;
    S_PERS p;
/***********************  Fin  *************************/

/*********************  ECRITURE  **********************/
    printf("Donner le nom du fichier: ");
    scanf("%s", nomFichier);

    if((sortie = fopen(nomFichier, "w+t")) == NULL)
    {
        printf("Erreur Open !!!");
        return ;
    }

    do{
        printf("Saisir le nom de la personne: ");
        scanf("%s", p.nom);
        if(strcmp(p.nom, "fin") == 0)
        {
            break;
        }

        printf("Saisir l'age: ");
        scanf("%d", &p.age);

        printf("Saisir le nombre d'enfants: ");
        scanf("%d", &p.nbEnfant);

        fwrite(&p, sizeof(S_PERS), 1, sortie);

    }while(1);

    fclose(sortie);
/****************  FIN  ECRITURE  ****************/


/*******************  LECTURE  *******************/
    FILE *fp=NULL;
    printf("%s", nomFichier);
    fp = fopen(nomFichier, "rt");
    if (fp == NULL)
    {
        printf("Erreur Open");
        return ;
    }

    fread(&p, sizeof(p), 1, fp);

    while(!feof(fp))
    {
        printf("\nNom: %s Age: %d NbEnfant: %d", p.nom, p.age, p.nbEnfant);
        fread(&p, sizeof(p),1,  fp);
    }
    fclose(fp);
    return;
/*****************  FIN LECTURE  ******************/


}

void lectureFichier()
{
//    FILE *fp=NULL;
//    fp = fopen(nomFichier, "rt");
//    if (fp == NULL)
//    {
//        printf("Erreur Open");
//        return 1;
//    }
//    fread(&p, sizeof(p), 1, fp)
//    while(!feof(fp))
//    {
//        printf("\nNom: %s Age: %d NbEnfant: %d", p.nom, p.age, .p.nbEnfant);
//        fread(&p, sizeof(p), fp);
//    }
//    fclose(p);

}
