/*Scrivi un programma che riceva in ingresso un numero minore di 10.000 
e dica da quante cifre è formato, quindi separi le migliaia dalle centinaia dalle 
decine e dalle unità visualizzandole separatamente sullo schermo*/
#include <stdio.h>
int main ()
{
    int n1=0, migliaia=0, centinaia=0, decine=0, unita=0;
    printf("inserisci un numero minero di 10000");
    scanf("%d",&n1);
    migliaia=n1/1000;
    centinaia=n1/100;
    decine=n1/10;
    unita=n1/1
}