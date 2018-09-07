#include <stdio.h>
#include <stdlib.h>
#include "file.h"

void fichier()
{
    ecriture();
    lecture();
    lecture2();
}

void ecriture()
{
    char car;
    FILE * fp=NULL;
    fp =fopen("fichier.txt", "wt");
    if(fp == NULL)
    {
        printf("Erreur Open");
        return;
    }
    for(car='a'; car<='z'; car++)
    {
        fwrite(&car, sizeof(char), 1, fp);
    }
    fclose(fp);
}

void lecture()
{
    char car;
    FILE * fp=NULL;
    fp =fopen("fichier.txt", "rt");

    if(fp == NULL)
    {
        printf("Erreur Open");
        return;
    }

    do{
        fread(&car, sizeof(car), 1, fp);
        //si on est pas à la fin du fichier, on affiche le contenu
        if(!feof(fp))
        {
            printf("\ncar: %c", car);
        }

    //tant qu'on a pas finit de parcourir le fichier, on continue
    }while(!feof(fp));
}

void lecture2()
{
    char car;
    FILE * fp=NULL;
    fp =fopen("fichier.txt", "rt");

    if(fp == NULL)
    {
        printf("Erreur Open");
        return;
    }
    //rechercher à partir du 6eme caractère depuis le début du fichier
        //0=SEEK_SET -> début du fichier
        //1=SEEK_CUR -> depuis la position courante
        //2=SEEK_END -> fin du fichier
    fseek(fp, 6, 0);
    //tant qu'on a pas finit de parcourir le fichier, on continue
    while(!feof(fp)){
        fread(&car, sizeof(car), 1, fp);
        //si on est pas à la fin du fichier, on affiche le contenu
        if(!feof(fp))
        {
            printf("\ncar: %c", car);
        }

    }
}
