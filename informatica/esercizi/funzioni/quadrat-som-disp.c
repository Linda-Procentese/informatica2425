/*si scriva un programma in linguaggio c che letto un numero intero positivo dallo
standerd input, visualizzi a terminale il quadrato del numero stesso facdendo uno soltanto di operazioni di somma.
-si osservi che il quadratodi ogni numerointero positivo N può essere costruito i primi numeri N dispari
-es: N=5 N2= 1+3+5+7+9= 25*/
#include <stdio.h>
void quadrato(int _n, int *_n2);
int main(){
    int n, n2=0;
    do{
        printf("inserisci il numero di cui vuoi trovare il quadrato: ");
        scanf("%d",&n);
    }while(n<=0);

    quadrato(n,&n2);
}
void quadrato(int _n, int *_n2){
    for(int i=1; i<=_n*2;i+=2){
        *_n2+=i;
        printf("%d+",i);
    }
    printf("=%d",*_n2);
}