/*convertire un numero da decimale a binario introducendo un valore da 0 a 63 (numerodibit minimo 6)
(2^6=64)*/
#include <stdio.h>

int main(){
    int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,num=0,quoz=0;
    printf("Inserisci un numero tra 0 e 63: ");
    scanf("%d",&num);

    quoz=num;
    if(num>=0 && num<=63){ 
        //convertiamo il numero
        if(quoz!=0){
            n0=quoz%2; //in n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoz!=0){
            n1=quoz%2; //in n1 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoz!=0){
            n2=quoz%2; //in n2 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoz!=0){
            n3=quoz%2; //in n3 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        
        if(quoz!=0){
            n4=quoz%2; //in n4 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        if(quoz!=0){
            n5=quoz%2; //in n5 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        if(quoz!=0){
            n5=quoz%2; //in n5 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        printf("\nIl numero decimale %d in binario: %d%d%d%d%d%d", num,n5,n4,n3,n2,n1,n0);
    }
    else 
        printf("\n Il valore inserito non rispetta la richiesta");
}