/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1 corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include <stdio.h>
int main(){
    int n, q=0, r=0, cnt=0;
    printf("inserisci un numero a piu cifre: ");
    scanf("%d",&n);

        q=n/10;
        r=n%10;
        if(r==1){
            printf("il numero %d è nella sua posizione",r);
            cnt++;
        }

        else 
            printf("il numero %d non è nella sua posizione",r);
    for(int i=1; i!=0;i++){
        
        r=q%10;
        q=q/10;
        if(r==i){
            printf("il numero %d è nella sua posizione",r);
            cnt++;
        }
        else 
            printf("il numero %d non è nella sua posizione",r);
        
    }
    printf("le cifre che corrispondono alla propria posizione sono %d",cnt);
    

}