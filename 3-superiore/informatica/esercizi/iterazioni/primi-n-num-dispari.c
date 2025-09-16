/*stampa i primi n numeri dispari dopo al numero A
es: A=5 e n=8
7,9,11,13,15,17,19,21

A=4 n=8
5,7,9,11,13,15,17,19*/
#include <stdio.h>
int main(){
    int n, A, B;
    do{
        printf("inserisci un numero: ");
        scanf("%d,&n");
    }while(n<=0);
    do{
        printf("inserisci un valore A: ");
        scanf("%d,&A");
    }while(A<=0);
    

    for(int i=0; i<=n; i++){
        while(A%2==0)
            {B=A+1;
            B+=2;}
//finisci
            
    }
}