/*1) Scrivi un programma che legge un numero NUM strettamente positivo 
e visualizza tutti i numeri pari inferiori a tale numero fino a 0.*/
#include <stdio.h>
int main(){
    int num,num1;
    printf("inserisci un numero positivo: ");
    scanf("%d",&num);
    if(num>0){
        while(num!=0){
            while(num%2==0){
                printf("\nil numero è pari");
                num1=num-2;
                printf("\nil numero pari successivo è %d",num1);
                }
        printf("\nil numero è dispari");
        num1=num-1;
        printf("\nil numero pari successivo è %d",num1);
        }
    }
    printf("\nfine");
}