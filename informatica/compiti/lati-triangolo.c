/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati 
di un triangolo (perché un triangolo possa essere tale la somma di ogni coppia 
lati deve essere maggiore dell’altro)*/
#include <stdio.h>
int main(){
    int l1, l2, l3, somma1, somma2, somma3;
    printf("inserisci i tre valori dei lati: ");
    scanf("%d%d%d",&l1,&l2,&l3);
    somma1=l1+l2;
    somma2=l2+l3;
    somma3=l3+l1;

    if(somma1>l3 && somma2>l1 && somma3>l2)
        printf("possono essere le lunghezze dei lati di un triangolo");
    else
        printf("non possono essere le lunghezze dei lati di un triangolo");
}