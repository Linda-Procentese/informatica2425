/*Caricato un vettore con valori random
    calcolare la media
*/
#include <stdio.h>
#include "libreria.c"
#include "libreria.h"
#define DIM 5

int main(){
    int vet[DIM]={0};
    float MEDIA;

    valoriRandom(vet, DIM);
    calcolaMedia(vet,DIM, MEDIA);
}

