#include <stdio.h>
int main(){
    int min_max,num, cnt=0,scelta;
    printf("vuoi stampare i valori in senso crescente=1 o decrescente=2? ");
    scanf("%d",&scelta);

    printf("inserisci un numero: ");
    scanf("%d",&num);
    min_max=num;

    while(num!=0){
        cnt++;
        switch(scelta){
            case 1:{
                if(num>=min_max){
                    min_max=num;
                    printf("%d \n",min_max);
                }
                break;
            }
            case 2:{
                if(num<=min_max){
                    min_max=num;
                    printf("%d \n",min_max);
                }
                break;
            }
            default:{
                printf("non hai eseguito una scelta giusta");
            }
        }
        printf("\n inserisci un nuovo valore: ");
        scanf("%d \n",&num);
    }
    printf("\n sono stati inseriti %d valori",cnt);
}