/*inizializzazione riempimento con valori pari , stampa, creazione di 
una libreria personale*/
#include <stdio.h>
#include "libreria.c"
#include "libreria.h"
#define DIM 10

int main(){
    int vettore[DIM]=0;

    richiedivalori(vettore,DIM);
    stampavett(vettore, DIM, '-');
}