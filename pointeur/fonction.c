#include "entete.h"
#include <stdio.h>

void afficher(S_PERS *p)
{
    p->age = p->age+1;
    printf("\n%d", p->age);
}

S_PERS *initialisation()
{

    S_PERS *personne = malloc(sizeof(*personne));


}
