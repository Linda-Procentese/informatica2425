/*dati n numeri, sommarli 4 a 4
termina non appena si introduce uno 0*/
#include <stdio.h>
int main(){
    int n, num, somma=0;

    printf("inserisci un numero n: ");
    scanf("%d",&n);
    printf("inserisci dei numeri: ");
    scanf("%d",num);

    while(num!=0){
        for(int i=1; i<=n; i++){
            somma+=i;
            
            if(i==4)
                printf("la somma ")



        }
    }
}
    