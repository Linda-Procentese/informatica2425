/*inizializzazione riempimento con valori pari , stampa, creazione di 
una libreria personale*/
#include <stdio.h>
#include "libArray.c"
#include "libArray.h"
#define DIM 10

int main(){
    int vettore[DIM]=0;

    riempiVettore(vettore,DIM);
    stampaVettore(vettore, DIM, '-');
}