/*dati n numeri in input (con n chiesto all'utente strettamente 
maggiore di 5), calcolare e mostrare la somma dei numeri negativi 
e dei numeri positivi*/
#include <stdio.h>
int main(){
    int n, num,sump=0,sumn=0;
    do{
        printf("scrivi un numero maggiore di 5: ");
        scanf("%d",&n);
    }while(n<=5);
    for(int i=0; i<n; i++){
        printf("\ninserisci un altro numero: ");
        scanf("%d",&num);
        
        if(num>=0)
            sump+=num;
            
        else
            sumn+=num;
            
    }
    printf("\nla somma di tutti i numeri positivi è: %d",sump);
    printf("\nla somma di tutti i numeri negativi è: %d",sumn);
}