/*dati due vettori caricati casualmente 
eseguire uno scambio*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libArray.c"
#include "libArray.h"
#define DIM 4
int main(){
    int vett1[DIM]={0},min=0,max=0,vett2[DIM];
    do{
        printf("inserisci gli estremi degli intervalli: ");
        scanf("%d%d",&min,&max);
    }while(min<0 || max<=0);
    riempiVettoreCasuale(vett1,DIM,min,max);
    riempiVettoreCasuale(vett2,DIM,min,max);
    scambioValori(vett1,vett2,DIM);
    stampaVettore(vett1,DIM,'-');
    stampaVettore(vett2,DIM,'-');


}