#ifndef FILE2_H_INCLUDED
#define FILE2_H_INCLUDED

#define LG 20

typedef struct
    {
        char nom[LG + 1];
        int age, nbEnfant;
    }S_PERS;

void fichier2();
void lectureFichier();
#endif // FILE2_H_INCLUDED
