/*progettare un algoritmo che legga un numero b<a e 
scriva quante volte a è divisibile per b
es: a=162 e b=3 a è divisibile 4 volte per b*/
#include <stdio.h>
int main (){
    int a,b,cnt=0,divisione=0;
    printf("ins due numeri: ");
    scanf("%d%d",&a,&b);
    if(b<a){
        while(a%b==0){
            divisione=a/b;
            cnt++;
            printf("%d/%d=%d",a,b,divisione);
    }}
    else
        printf("errore");
}