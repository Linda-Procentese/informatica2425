/*dati in input 10 numeri interi determinare il valore
maggiore e quante volte compare*/
#include <stdio.h>
int main(){
    int num, max, cnt=0;
    for(int i=0; i<10; i++){
        printf("inserisci un numero intero: ");
        scanf("%d",&num);
        if(i==0)
            max=num;
        if(num>max)
            {max=num;
            cnt=1;}
        else if(num==max)
            cnt++;
    }
    if(cnt!=1)
        printf("il numero maggiore è %d, è comparso %d volte",max,cnt);
    else
        printf("il numero maggiore è %d, è comparso %d volta",max,cnt);
}