/*leggere una sequenza di numeri, visualizzarla
si termina non appena arriva uno 0*/

#include <stdio.h>
int main(){
    int num;
    printf("ins un valore:");
    scanf("%d",&num);
    


    while(num!=0){
        printf("il valore inserito è:%d",num);
        printf("ins un valore:");
        scanf("%d",&num);
    
    }
}