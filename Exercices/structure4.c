#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "structure4.h"

void structure4()
{
    struct s_point3 courbe[NB]=
        {
            {'X', 10, 200},
            {'Y', 510, 8},
            {'Z', 100, 20},
            {'A', 1, 20},
            {'B', -10, 20},
        };
//    afficheTableau(struct s_point3 courbe);
//    afficheTableauPointeur(&courbe);
}

void afficheTableau(struct s_point3 tableau[])
{
    int i = 0;
    for(i=0; i < NB ; i++)
    {
        printf("Point %c de coordonnées %d %d",
            tableau[i].c,
            tableau[i].x,
            tableau[i].y);
    }
}
void afficheTableauPointeur(struct s_point3 *pTab)
{
    int i = 0;
    struct point *p=NULL;
    for(i=pTab; i<NB; i++)
    {
        printf("Point %c de coordonnées %d %d",
                pTab->c,
                pTab->x,
                pTab->y
            );
    }
}
