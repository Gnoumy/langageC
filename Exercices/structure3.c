#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "structure3.h"
#include "structure1.h"

void structure3()
{
    struct s_point2 test;
    strcpy(test.c, "B");
    test.x = 15;
    test.y = 10;
    structOppose(&test);
//    afficher(struct s_point2 test);

}

void structOppose(struct s_point2 *test)
{
    struct s_point2 op;
    strncpy(op.c, test->c, 2);
    op.x = -test->x;
    op.y = -test->y;
}
