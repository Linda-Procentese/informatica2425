/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/
#include <stdio.h>
int main(){
    int n1,n2,div1,div2,somma1=0,somma2=0;
    do{
        printf("inserisci due numeri: ");
        scanf("%d%d",&n1,&n2);
    }while(n1<=0 || n2<=0);
    

    for(div1=1;div1<=n1/2; div1++){
        if(n1%div1==0){
            somma1+=div1;
        }
    }
    for(div2=1;div2<=n2/2; div2++){
        if(n2%div2==0){
            somma2+=div2;
        }
    }
    if(somma1==n2)
        printf(("i due numeri sono amicali"));
    
    else if(somma2==n1)
        printf(("i due numeri sono amicali"));
    
    else
        printf(("i due numeri non sono amicali"));
}