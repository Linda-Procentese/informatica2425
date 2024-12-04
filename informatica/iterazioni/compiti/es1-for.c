/* Scrivi un programma che effettua il prodotto tra due numeri utilizzando 
il metodo delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/
#include <stdio.h>
int main()
{
    int a,b,i,somma=0;
    //le variabili sommatorie e contatore vanno sempre inizializzate a 0
    do{
        printf("inserisci il primo valore: ");
        scanf("%d",&a);

    }while(a<0);
    do{
        printf("inserisci il secondo valore: ");
        scanf("%d",&b);

    }while(b<0);
    //i due valori sono sicuramente positivi
    for(i=0; i<a; i++){//< e non <= perche i parte da 0
        somma+=b;//somma=somma+b
    }
    printf("il prodotto tra %d e %d vale: %d",a,b,somma);
}