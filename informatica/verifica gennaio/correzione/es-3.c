#include <stdio.h>
int main(){
    int num, q,r,pos;
    do{
        printf("inserisci un valor: ");
        scanf("%d",&num);
    }while(num<=0);

    q=num;
    while(q!=0){
        r=q%10;
        q=q/10;
        if(r==pos)
        prrintf("\n la cifra %d corrisponde alla suaposizione %d",r,pos);
        pos++;
    }
}