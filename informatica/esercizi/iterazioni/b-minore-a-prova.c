/*progettare un algoritmo che legga un numero b<a e 
scriva quante volte a è divisibile per b
es: a=162 e b=3 a è divisibile 4 volte per b*/
#include <stdio.h>
int main (){
    int a,b,cnt=0,divisione=0;
    do{
    printf("ins un numero: ");
    scanf("%d",&a);
    printf("ins un altro numero: ");
    scanf("%d",&b);
    }while(a<b);

        while(a%b==0){
            divisione=a/b;
            cnt++;
        }
        for(cnt=0; a%b==0; cnt++){
            divisione=a/b;
            
    }
    printf("%d/%d=%d",a,b,divisione);
    printf("%d è divisibile per %d: %d volte",a,b,cnt);
    
    else 
     printf("errore");
} 