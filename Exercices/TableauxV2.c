#include <stdio.h>
#include "TableauxV2.h"

void tableauxV2()
{
    int tab[10]={1,2,3,4,5,6,7,8,9,10};
    int min, max;
    max = tab[0];
    min = tab[9];

    for(int i=0; i<sizeof(tab)/sizeof(int);i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }else{
            if(tab[i] < min )
            {
                min = tab[i];
            }
        }
    }
    printf("Max: %d \n", max);
    printf("Min: %d \n", min);
}
