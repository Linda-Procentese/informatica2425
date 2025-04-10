/* Date N coppie di numeri (con N generato casualmente con valori compresi tra 2 e 7) 
contare e stampare quelle che hanno i valori l'uno l'opposto dell'altro. 
(ad esempio 3 e -3 oppure -7 e 7)*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int n=rand()%6+2, n1,n2;

    printf("inserisci una coppia di numeri: ");
    scanf("%d%d",&n1,&n2);

    for(int i=1;i<=n;i++){
        printf("inserisci una coppia di numeri: ");
        scanf("%d%d",&n1,&n2);
        
    }
    if(n1==n2*(-1))
            printf("le coppie con valori opposti sono %d cioè %d e %d",i,n1,n2);
        else if(n2==n1*(-1))
            printf("le coppie con valori opposti sono %d cioè %d",i,n1,n2);
}