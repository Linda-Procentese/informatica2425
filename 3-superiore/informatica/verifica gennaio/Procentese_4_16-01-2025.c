/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/
#include <stdio.h>
int main(){
    int n,n1,n2, cnt=1,scelta,numeri_inseriti=0;
    printf("vuoi stampare i valori in senso crescente=1 o decrescente=2? ");
    scanf("%d",&scelta);

    if(scelta==1){

            printf("inserisci un numero: ");
            scanf("%d",&n);            
            if(n!=0){
            for(numeri_inseriti=1; n!=0; numeri_inseriti++){
            
            

            printf("\ninserisci un numero: ");
            scanf("%d",&n1);

            if(n<n1){
                printf("%d e %d sono in ordine crescente", n, n1);
            }
          
        }
        
    }
    }
    if(scelta==2){

            printf("inserisci un numero: ");
            scanf("%d",&n);
            if(n!=0){
                for(numeri_inseriti=1; n!=0; numeri_inseriti++){
                
                

                printf("\ninserisci un altro numero: ");
                scanf("%d",&n1);

                if(n<n1)
                    printf("%d e %d sono in ordine decrescente", n, n1);

                }
        
            }
    }
    printf("numeri inseriti sono %d",numeri_inseriti);

}