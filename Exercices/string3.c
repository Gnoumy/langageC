#include <stdio.h>
#include "string3.h"

void string3()
{
/*************  Formalisme tableau  **************/
    char *adr = "bonjour";
    int i;
    for(i=0; i<3; i++)
    {
        putchar(adr[i]);
    }
    printf("\n");
    i=0;
    while(adr[i])
    {
        putchar(adr[i++]);
    }
/*************  Formalisme pointeur  **************/
    char *adr2 = "bonjour";
    int j;
    for(j=0; j<3; j++)
    {
        putchar(*(adr + j));
    }
    printf("\n");
    j=0;
    while((*(adr +j)) != 0 )
    {
        putchar(*(adr + j++));
    }
}
