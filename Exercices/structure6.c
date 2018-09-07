#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "structure6.h"

void structure6()
{
    struct personne p;
    remplir(&p);
    printf("\nNom: %s", p.nom);
    printf("\nDate Embauche: %d %d %d",
                    p.date_embauche.jour,
                    p.date_embauche.mois,
                    p.date_embauche.annee
            );
    printf("\nDate poste: %d %d %d",
                    p.date_poste.jour,
                    p.date_poste.mois,
                    p.date_poste.annee
            );
}

void remplir(struct personne *p)
{
    char reponse = 'N';
    printf("Nom: ");
    scanf("%s", p->nom);

    printf("Date Embauche: ");
    scanf("%d %d %d",
            &p->date_embauche.jour,
            &p->date_embauche.mois,
            &p->date_embauche.annee);
    printf("Date poste = Date Embauche ? ");
    //__fpurge() nécessaire pour vider le tampon
    __fpurge(stdin);
    scanf("%s", &reponse);

    if(reponse == 'o')
    {
        p->date_poste = p->date_embauche;
    }else{
        printf("Date Poste: ");
        scanf("%d %d %d",
            &p->date_embauche.jour,
            &p->date_embauche.mois,
            &p->date_embauche.annee);
    }
}
