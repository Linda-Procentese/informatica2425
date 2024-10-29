/*Creare una sorta di menù( vedi esempio) tramite dei printf 
per la scelta dell'operazione da compiere tra due valori generati 
casualmente( eseguendo lì dove c'è bisogno gli opportuni controlli).
 Comunicare il risultato dell'operazione o la scelta dell'utente di 
 non fare niente e uscire dal programma:ES: "Seleziona l'operazione 
 da eseguire: 
        0.  TERMINA
        1.  SOMMA
        2.  DIFFERENZA
        3.  MOLTIPLICAZIONE
        4.  DIVISIONE  "*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2;
    int scelta;

    printf("------SCEGLI DAL MENù L'OPERAZIONE DA FARE------\n");
    printf("0.  TERMINA\n");
    printf("1.  SOMMA\n");
    printf("2.  DIFFERENZA\n");
    printf("3.  MOLTIPLICAZIONE\n");
    printf("4.  DIVISIONE\n");

    printf("scegli l'operazione da compiere:\n");
    scanf("%d",&scelta);
    srand(time(NULL));
    num1=rand()%50+1;
    num2=rand()%50+1;
    printf("\n%.2f %.2f\n",num1, num2);

    switch(scelta){
        case 0:
            printf("il programma termina");
            break;
        case 1:
            printf("la somma vale: %.2f",num1+num2);
            break;
        case 2:
            printf("la differenza vale: %.2f",num1-num2);
            break;
        case 3:
            printf("la moltiplicazione vale: %.2f",num1*num2);
            break;
        case 4:
            printf("la divisione vale: %.2f",num1/num2);
            break;
        default:
            printf("è statainserita una scelta non valida");
    }
    return 0;
}