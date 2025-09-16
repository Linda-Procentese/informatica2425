/*Scrivi un programma che esegue il calcolo del 
fattoriale di un numero num inserito.*/
#include <stdio.h>
int main(){
    int n=0,fattoriale=1;
    do{
    printf("inserisci un numero: ");
    scanf("%d",&n);
    }while(n<=0);

    for(int i=1;i<=n;i++){
        fattoriale*=i;}
        printf("\nil calcolo del fattoriale di %d vale %d",n,fattoriale);
    
    

}