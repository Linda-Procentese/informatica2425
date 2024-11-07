/*Esercizio4
VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include <stdio.h>
int main() {
    int n, q, r,esponente=0;
    printf("inserisci un numero: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("il numero è una potenza di 2\n");
    if(n>=0 && n<=10){
    
        if(n==2){
        q=n/2;
        r=n%2;
        if(r==0)
            esponente=esponente+1;}
        if(n==4){
        q=n/2;
        r=n%2;
        if(r==0)
            esponente=esponente+2;}
        if(n==8){
        q=n/2;
        r=n%2;
        if(r==0)
            esponente=esponente+3;}
        printf("l'esponente è: %d",esponente);
        
    }
    else
        ("errore");}
    else
        printf("il numero non è una potenza di 2");
    }
