/*Scrivi un programma che riceva in ingresso un numero minore di 10.000 e dica da quante cifre è formato, quindi separi le migliaia dalle centinaia dalle decine e dalle unità visualizzandole separatamente sullo schermo*/

#include <stdio.h>

int main(){
    int numero, quoziente=0, resto=0;

    printf("Inserire un numero inferiore a 10000: ");
    scanf("%d", &numero);

    if(numero<1 || numero>=10000){
        printf("Il numero inserito non è valido.\n");
    }
    else { //siamo sicura che il numero è compreso tra 1 e 9999
        if(numero<10){
            printf("Il numero ha una cifra\n");
            quoziente = numero / 10;
            resto = numero % 10;
            printf("prima cifra : %d\n", resto);
        }
        else if(numero<100){//non è minore di 10
            printf("Il numero ha due cifre\n");
            quoziente = numero / 10;
            resto = numero % 10;
            printf("prima cifra : %d\n", resto);
            resto = quoziente % 10;
            quoziente = quoziente / 10;
            printf("seconda cifra : %d\n", resto);
        }
        else if(numero<1000){ //non è minore di 100
            printf("Il numero ha tre cifre\n");
            quoziente = numero / 10;
            resto = numero % 10;
            printf("prima cifra : %d\n", resto);
            resto = quoziente % 10;
            quoziente = quoziente / 10;
            printf("seconda cifra : %d\n", resto);
            resto = quoziente % 10;
            quoziente = quoziente / 10;
            printf("terza cifra : %d\n", resto);
        }
        else{//compreso tra 1000 e 9999
            printf("Il numero ha quattro cifre\n");
            quoziente = numero / 10;
            resto = numero % 10;
            printf("prima cifra : %d\n", resto);
            resto = quoziente % 10;
            quoziente = quoziente / 10;
            printf("seconda cifra : %d\n", resto);
            resto = quoziente % 10;
            quoziente = quoziente / 10;
            printf("terza cifra : %d\n", resto);
            resto = quoziente % 10;
            quoziente = quoziente / 10;
            printf("quarta cifra : %d\n", resto);
        }


        
    }


}