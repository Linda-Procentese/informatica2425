/*Risolvi l'esercizio su Github:Scrivi un programma 
che riceva in ingresso un numero minore di 10.000 
e dica da quante cifre è formato, quindi separi 
le migliaia dalle centinaia dalle decine e dalle 
unità visualizzandole separatamente sullo schermo*/
#include <stdio.h>

int main ()
{
    float a=0, cifra1=0, cifra2=0, cifra3=0, cifra4=0;
    printf("inserisci un numero minore di 10000: ");
    scanf("%d",&a);
    cifra1=a%10;
    cifra2=cifra1%10;
    cifra3=cifra2%10;
    cifra4=cifra3%10;
    printf("il numero è suddiviso %d%d%d%d ",cifra1,cifra2,cifra3,cifra4);
}