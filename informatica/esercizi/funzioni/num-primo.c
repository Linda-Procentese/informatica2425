/*Scrivete una funzione con parametro un intero n(passato per valore) 
che stabilisca se n è un numero primo. La funzione restituirà 1 se il numero è primo altrimenti 0.*/
#include <stdio.h>

int stabilire_numero_primo (int _n);
int main(){
    int n;
    do{
        printf("inserisci un valore n: ");
        scanf("%d",&n);
    }while(n<1);

    stabilire_numero_primo (n);
    
}
int stabilire_numero_primo (int _n){
    int cnt=0;
    for(int div=1;div<=_n;div++){
        if(_n%div==0){
            if(div>2 && div<_n-1){
                while(cnt<1)
                {    if(_n%div==0){
                        
                        printf("0");
                        cnt++;
                        } //non è primo
                    else
                        {printf("1");
                        cnt++;}//è primo
                }

            }
        }
    }
}