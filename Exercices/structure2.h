#ifndef STRUCTURE2_H_INCLUDED
#define STRUCTURE2_H_INCLUDED



#define DIM 20

struct produit
    {
        int numero;
        char designation[DIM + 1];
        int qte;
        float prix;
    };
void structure2();
void ModifStruct (struct produit *);

#endif // STRUCTURE2_H_INCLUDED
