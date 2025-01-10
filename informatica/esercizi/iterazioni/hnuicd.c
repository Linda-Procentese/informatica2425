/*scrivi un programma che, dati in input n numeri interi e un 
numero x, determini:
-quanti numeri sono maggiori di x
-quanti numeri sono minori di x
-quanti numeri sono uguali a x*/
#include <stdio.h>
int main(){
    int x, n, cnt=0, max,min,uguale;

    printf("inserisci un numero x:");
    scanf("%d",&x);
    printf("\nscrivi un numero intero:");
    scanf("%d",&n);

    while(n>x){
        
        cnt++;
        printf("%d numeri sono maggiori di %d",cnt,x);
        }
}
