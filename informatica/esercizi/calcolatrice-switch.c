#include <stdio.h> 
int main(){
    int num1=0;
    int num2=0;
    char operazione;
    float risultato;
    int flag=0;

    printf(" inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("inserisci il secondo numero: ");
    scanf("%d", &num2);
    printf("quale operazione vuoi fare:");
    scanf(" %c", &operazione);
    switch(operazione){
        case 'a':
                    risultato=num1+num2;
                    break;
        case 'm': 
                    risultato=num1*num2;
                    break;
        case 's':
                    risultato=num1-num2;
                    break;
        case 'd':
                    risultato=(float)num1/(float)num2;
                    break;
        default: 
                    flag=1;
                    printf("l'operazione scelta non è disponibile");
    }
    if(flag==0)
                    printf("il risultato della operazione è: %f", risultato);
    
    
    

}