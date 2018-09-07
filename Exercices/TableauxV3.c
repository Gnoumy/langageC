#include <stdio.h>
#include "TableauxV3.h"

void tableauxV3()
{
    float t1[10];
    float t2[10]={9,-7,8,-844,200,7,8,11,256,0};

    for(int i=0; i<sizeof(t2)/sizeof(float); i++)
    {
        if(t2[i] > 0 )
        {
            t1[i] = t2[i];
        }else{
            t1[i] = 0;
        }
    }

    for(int i=0; i<sizeof(t1)/sizeof(float); i++)
    {
        printf(" T[%d] = %f\n", i, t1[i]);
    }



}
