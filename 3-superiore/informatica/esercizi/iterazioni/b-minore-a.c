/*progettare un algoritmo che legga un numero b<a e 
scriva quante volte a è divisibile per b
es: a=162 e b=3 a è divisibile 4 volte per b*/
#include <stdio.h>
int main (){
    int a,b,cnt=0,q,r;
    do{
    printf("ins due numeri: ");
    scanf("%d%d",&a,&b);
    }while(a<b);
    
    q=a; //pernon intaccare il valore a
    while(q>b && r!=0){
        if(q%b==0){
            r=q%b;
            cnt++;
            q=q/b;
        }
    }
}