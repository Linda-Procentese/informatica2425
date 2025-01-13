/*Scrivi un programma che effettua il calcolo della media
 dei voti della pagella, inserendoli uno alla volta e 
 chiedendo a ogni inserimento di un numero se i voti da 
 inserire sono terminati accettando come risposta S oppure N*/
 #include <stdio.h>
 int main(){
    int media=0,cnt=0;
    float voti=0;
    do{
        printf("inserisci il voto: ");
        scanf("%f",&voti);
    }while(voti<0);

    
 }