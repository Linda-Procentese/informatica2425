/*Un
grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
La Direzione decide di applicare sui prodotti di ciascun reparto
sconti con percentuali differenziate:-  reparto
   1 = nessuno sconto -  reparto
   2 = sconto 3%-  reparto
   3 = sconto 2%-  reparto
   4 = sconto 5%
Dati
reparto di appartenenza e prezzo di un prodotto, calcolare e
visualizzare il prezzo scontato.*/
#include <stdio.h>
int main(){
    int reparto;
    float prezzo, sconto;
     printf("inserisci il reparto in cui si trova il prodotto: ");
     scanf("%d",&reparto);
     printf("inserisci il prezzo del prodotto: ");
     scanf("%f",&prezzo);

     switch (reparto){
        case 1:
            sconto=0;
        break;
        case 2:
            sconto=(prezzo/100)*3;
            printf("il prezzo scontato è %f",sconto);
        break;
        case 3:
            sconto=(prezzo/100)*2;
            printf("il prezzo scontato è %f",sconto);
        break;
        case 4:
            sconto=(prezzo/100)*5;
            printf("il prezzo scontato è %f",sconto);
        break;
     
    default:
        printf("errore");
     }


}