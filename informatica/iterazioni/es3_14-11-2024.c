/*leggere una sequenza di numeri, visualizzarla e 
determinare quanti numeri sono stati inseriti.
il programma termina non appena arriva uno 0*/

#include <stdio.h>
int main(){
    int num, cnt=1;
    printf("ins un valore:");
    scanf("%d",&num);
    


    while(num!=0){
        printf("il valore inserito è:%d",num);
        printf("\nins un valore:");
        scanf("%d",&num);
        cnt++;   
    }
    printf("\nsono stati inseriti: %d numeri",cnt);
}