/*scrivi un programma che genera un vettore casuale e lo ordina*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libArray.h"
#include "libArray.c"

int main(){
    srand(time(NULL));
    int vett[10];

    riempiVettoreCasuale(vett, 10,0,100);
    stampaVettore(vett, 10, '-');
    bubbleSort(vett, 10);
    printf("\n");
    stampaVettore(vett,10, '-' );

}