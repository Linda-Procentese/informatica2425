/*Scrivi un programma in C che riempia un vettore di 10 elementi con numeri casuali compresi tra 0 e 100. Quindi fai in modo che il programma possa mostrare i due valori maggiori presenti nel vettore. Suddividi il programma in funzioni (riempiVettore(), stampaVettore(), stampaDueMax()).*/

#include <stdio.h>
#include "libArray.h"
#include "libArray.c"

#define DIM 10
void stampaDueMax(int vettore[], int dim);
int main(){
    int vettore[DIM];
    riempiVettoreCasuale(vettore, DIM, 0, 100);
    stampaVettore(vettore, DIM, '.');
}
void stampaDueMax(int vettore[], int dim){
    int max=vettore[0];
    int max2=vettore[0];
    for(int i=1; i<dim; i++){
        if(max<vettore[i]){
            max2=max;
            max=vettore[i];
        }else if(vettore[i]>max2 && vettore[i]!=max){
            max2=vettore[i];
        }
    }
    printf("i due numeri maggiori sono %d-%d", max, max2);
}