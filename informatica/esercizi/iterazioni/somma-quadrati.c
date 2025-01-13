/*Scrivi un programma che visualizzi la somma dei quadrati
 dei primi n numeri naturali successivi a n
 es: somma=9*9+10*10+11*11+...*/

 #include <stdio.h>
 int main(){
    int inizio,quantita,somma=0;
    printf("inserisci il valore iniziale: ");
    scanf("%d",&inizio);
    do{
    printf("inserisci quanti elementi vuoi considerare: ");
    scanf("%d",&quantita);
    }while(quantita<=0);
    for(int i=inizio;i<=inizio+quantita;i++){
        somma+=i*i;
        

    }
    printf("la somma è: %d",somma);
 }