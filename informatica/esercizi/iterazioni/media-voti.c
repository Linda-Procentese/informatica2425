/*Scrivi un programma che effettua il calcolo della media
 dei voti della pagella, inserendoli uno alla volta e 
 chiedendo a ogni inserimento di un numero se i voti da 
 inserire sono terminati accettando come risposta S oppure N*/
 #include <stdio.h>
 int main(){
    int media=0,cnt=0,somma=0;
    char risp, N, S;
    float voti=0;
    risp=N;
    do{
        printf("inserisci il primo voto: ");
        scanf("%f",&voti);
        cnt++;
        printf("i voti sono terminati? S/N");
        scanf("%c",&risp);
            if(risp==S){
                somma+=voti;
                media=somma/cnt;
                printf("la media è: %d",media);
            }
        
    }while(risp==N);
 }


    

    
