#ifndef STRUCTURE1_H_INCLUDED
#define STRUCTURE1_H_INCLUDED

struct s_point
    {
        char c[2];
        int x, y;
    };

void structure1();
void afficher(struct s_point test);
void afficherPointeur(struct s_point *test);
#endif // STRUCTURE1_H_INCLUDED
