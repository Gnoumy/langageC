#ifndef STRUCTURE6_H_INCLUDED
#define STRUCTURE6_H_INCLUDED
#define LG_NOM 30

struct date
{
    int jour;
    int mois;
    int annee;
};

struct personne
{
    char nom[LG_NOM+1];
    struct date date_embauche;
    struct date date_poste;
};

void structure6();
void remplir(struct personne *p);

#endif // STRUCTURE6_H_INCLUDED
