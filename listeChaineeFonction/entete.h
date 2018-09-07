#ifndef ENTETE_H_INCLUDED
#define ENTETE_H_INCLUDED

struct Lettre
{
    char car;
    struct Lettre *pSuivant;
};

typedef struct Lettre LETTRE;

void ajouterDebut();
void ajouterFin();
void supprimerCar();
void afficher(LETTRE * debut);
void purger();
#endif // ENTETE_H_INCLUDED
