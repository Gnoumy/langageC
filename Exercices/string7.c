#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string7.h"

void string7()
{
    char verbe[20+1];
    char *sujet[6]={"je", "tu", "il/elle", "nous", "vous", "ils/elles"};
    char *term [6]={"e", "es", "e", "ons", "ez", "ent"};
    char *adTerminaison;

    int i = 0;

    /********************  Tester si le verbe se termine par ER  ************************/
    do{
        printf("Veuillez saisir un verbe du premier groupe: ");
        scanf("%s", verbe);
        adTerminaison = verbe + strlen(verbe) -2;
    }while(strcmp(adTerminaison, "er") !=0);

    /********************   FIN TEST           ************************/

    printf("Conjugaison du verbe %s \n", verbe);
    for(i=0; i<6; i++)
    {
        strcpy(adTerminaison, term[i]);
        printf("%s %s\n", sujet[i], verbe);
    }
}
