/*Chiedi all'utente 4 numeri e mostrali in ordine decrescente. */

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, temp;
    printf("inserisci il primo valore:");
    scanf("%d", &n1);
    printf("inserisci il secondo valore:");
    scanf("%d", &n2);
    printf("inserisci il terzo valore:");
    scanf("%d", &n3);
    printf("inserisci il quarto valore:");
    scanf("%d", &n4);


    if(n2>n1){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n3>n1){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if(n4>n1){
        temp = n1;
        n1 = n4;
        n4 = temp;
    }
    if(n3>n2){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if(n4>n2){
        temp = n2;
        n2 = n4;
        n4 = temp;
    }
    if(n4>n3){
        temp = n3;
        n3 = n4;
        n4 = temp;
    }
    printf("i 4 valori in ordine decrescente sono: %d %d %d %d", n1, n2, n3, n4);

    return 0;
}