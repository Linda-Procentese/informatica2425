/*calcola la somma dei primi n numeri naturali
es:5 -> 1+2+3+4+5*/
#include <stdio.h>
int main(){
    int n,num,somma=0;
    do{
        printf("inserisci un numero: ");
        scanf("%d",&n);

    }while(n<=0);

    for(int i=1; i<=n; i++){
        somma+=i;

    }
    printf("la somma dei primi %d numeri naturali è: %d",n,somma);
}