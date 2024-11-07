/*Esercizio3
DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/
#include <stdio.h>

int main(){
    int n1,n2,scelta, somma, max, min, differenza, k;
    printf("inserisci due numeri :");
    scanf("%d%d",&n1,&n2);
    
    printf("Scegli tra:\n");
    printf("1) LA SOMMA IN VALORE ASSOLUTO\n");
    printf("2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE\n");
    printf("3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI AVVICINA DI PIÙ\n");
    printf("4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO: ");
    scanf("%d",&scelta);

    switch (scelta){
        case 1:
            somma=n1+n2;
            if(somma<0){
                somma=somma*(-1);
                printf("la somma è: %d",somma);}
            else
                printf("la somma è: %d",somma);
        break;
        case 2:
            max=n1;
            if(max<n2)
                max=n2;
            min=n1;
            if(min>n2)
                min=n2;
            printf("il numero maggiore è: %d\n",max);
            printf("il numero minore è: %d",min);

            differenza=max-min;
            printf("la differenza tra %d e %d è: %d",max,min,differenza);
        break;

        case 3:
            printf("inserisci un altro valore: ");
            scanf("%d",&k);
        break;
        case 4:
            if(n1%n2==0)
                printf("i due numeri sono multipli");
            else if(n2%n1==0)
                printf("i due numeri sono multipli");
            else
                printf("i due numeri non sono multipli");
        break;
    }
}