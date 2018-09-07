#include "Exercice13.h"
void exercice13()
{
    int note,noteMax, noteMin, compteMax, compteMin;

    noteMax = compteMax = compteMin = 0;
    noteMin = 20;

    do
    {
        printf("Saisir une note: (-1 pour finir) ");
        scanf("%d", &note);
        if(note <= 20 && note >= 0)
        {
            if(note == noteMax || note > noteMax)
            {
                compteMax = 1;
                if (noteMax == note){
                    compteMax++;
                }else{
                    noteMax = note;
                }
            }
            if(note < noteMin || note == noteMin )
            {
                compteMin = 1;
                if (noteMin == note){
                    compteMin++;
                }else{
                    noteMin = note;
                }
            }

        }else{
            printf("ERREUR! Veuillez resaisir une note \n");
            continue;
        }

    } while (note != -1);
    printf("Note maximale: %d attribuée %d fois", noteMax, compteMax);
    printf("\nNote minimale: %d attribuée %d fois", noteMin, compteMin);
}
