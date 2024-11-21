/*Esercizio
Dato un numero stampare tutti i suoi divisori*/
#include <stdio.h>
int main(){
    int num, q, r;
    printf("inserisci un numero: ");
    scanf("%d",&num);
    q=num/3;
    r=num%3;
    printf("il divisore di tre è: %d",q);
    while(q!=0 || r==0){
        r=q%3;
        q=q/3;
        printf("\nil divisore di tre è: %d",q);
        }
    printf("\nfine");
}