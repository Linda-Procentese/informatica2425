/*progettare un algoritmo che legga un numero b<a e 
scriva quante volte a è divisibile per b
es: a=162 e b=3 a è divisibile 4 volte per b*/
#include <stdio.h>
int main (){
    int n1,n2,cnt=0,divisione=0;
    printf("ins due numeri: ");
    scanf("%d%d",&n1,&n2);
    if(n2<n1){
        while(n1%n2==0){
            divisione=n1/n2;
            cnt++;
            printf("%d/%d=%d",n1,n2,divisione);
    }}
    else
        printf("errore");
}