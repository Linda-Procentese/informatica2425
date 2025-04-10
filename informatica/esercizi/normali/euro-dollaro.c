/*Supponete
che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.
Data
una somma di denaro calcolare il controvalore.*/
#include <stdio.h>
int main (){
    float sommadenaro, sommaconvertita;
    int scelta;
    const float tasso=1.23;  //tasso conversione
    
    printf("\n scegli l'operazione da fare (1-dollare/euro, 2-euro/dollaro): ");
    scanf("%d",&scelta);
    printf("\nins il valore che vuoi convertire:");
    scanf("%f",&sommadenaro);

    switch(scelta){
        case 1:
            sommaconvertita=sommadenaro/tasso;
            printf("%.2f$=%.2f€", sommadenaro, sommaconvertita);
            break;
        case 2:
            sommaconvertita=sommadenaro*tasso;
            printf("%.2f€=%.2f$", sommadenaro, sommaconvertita);
        
            break;
        default:
            printf("errore");
            break;
    }
}