/*Scrivi un programma che legge in input il valore di tre lati di un triangolo, 
individua se si tratta di un triangolo equilatero e ne calcola in tal caso l’area e il perimetro*/

#include <stdio.h>
#include<math.h>
int main(){
    int l1,l2,l3,p;
    float a;
    printf("ins il primo lato del triangolo: ");
    scanf(" %d",&l1);
    printf("ins il secondo lato del triangolo: ");
    scanf(" %d",&l2);
    printf("ins il terzo lato del triangolo: ");
    scanf(" %d",&l3);

    if(l1==l2 && l2==l3){
        printf("il triangolo è equilatero\n");
        p=l1+l2+l3;
        a=sqrt(3)*l1/2*l1/2;
        printf("l'area vale: %.2f e il perimetro è: %d",a,p);
    }
     else
        printf("il triangolo non è equilatero");
}  