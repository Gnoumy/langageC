#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structure1.h"

void structure1()
{
    struct s_point test;
    strcpy(test.c, "B");
    test.x = 15;
    test.y = 10;
    afficher(test);
    afficherPointeur(&test);
}

void afficher(struct s_point test)
{
    printf("Point %s de coordonnées %d %d", test.c, test.x, test.y);
}

void afficherPointeur(struct s_point *test)
{
    printf("\nPoint %s de coordonnées %d %d", test->c, test->x, test->y);
}
