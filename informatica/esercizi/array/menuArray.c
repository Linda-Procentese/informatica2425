/*creiamo un menù di richieste 
1)caricare un array
2)stampare l'array
3)ordina tramite la tecnica del bubble sort
*/
#include <stdio.h>
#include "libArray.c"
#include "libArray.h"

#define DIM 5

int mai(){
    int vett[DIM];
    int scelta;
    do{
        printf("\nMENU'");
        printf("\n1) caricare un array");
        printf("\n2)stampare l'array");
        printf("\n3)ordina tramite la tecnica del bubble sort");
        printf("\n digita 0 per terminare");
        scanf("%d",&scelta);

        switch(scelta){
            case 1 :{
                riempiVettore(vett,DIM);
                break;
            }
            case 2 :{
                stampaVettore(vett,DIM,'-');
            }
            default:
            break;
        }

    }while(scelta!=0);
}