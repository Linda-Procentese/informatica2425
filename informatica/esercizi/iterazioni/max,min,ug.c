/*scrivi un programma che, dati in input n numeri interi e un 
numero x, determini:
-quanti numeri sono maggiori di x
-quanti numeri sono minori di x
-quanti numeri sono uguali a x*/
#include <stdio.h>
int main(){
    int n,x, cntmax=0, cntmin=0, cntug=0;
    printf("inserisci il numero di numeri da analizzare: ");
    scanf("%d",&n);
    printf("inserisci un numero x: ");
    scanf("%d",&x);

    for(int i=0; i<=n;i++){
        if(i>x)
            cntmax++;
        if(i<x)
            cntmin++;
        if(i==x)
            cntug++;
    }
    printf("\n%d numeri sono maggiori di %d",cntmax,x);
    printf("\n%d numeri sono minori di %d",cntmin,x);
    printf("\n%d numeri sono uguali a %d",cntug,x);



}