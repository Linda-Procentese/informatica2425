/*Un cinema propone biglietti gratis a chi ha meno di 10 anni e chi ne ha più di 75. Chi ha un'età compresa tra 10 e 15 anni riceve uno sconto del 50% sul prezzo del biglietto. Tutti gli altri pagano il prezzo intero di 9 euro. */

#include <stdio.h>
int main()
{
    int eta=0;
    float prezzobiglietto=0;
    const int prezzointero=9;
    printf("inserisci la tua età: ");
    scanf("%d",&eta);
    if(eta<10||eta>75){
        prezzobiglietto=0;
    }
    else{
        if(eta>10 && eta<15)
            prezzobiglietto=prezzointero/2;
        else{
            if(eta==10)
                prezzobiglietto=prezzointero*2;
            else
               prezzobiglietto=prezzointero; 
        }
    }
    printf("il prezzo del biglietto è: %f",prezzobiglietto);
}