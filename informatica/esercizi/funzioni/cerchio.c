/*dato il raggio circolare la circonferena e l'area del cerchio*/
#include <stdio.h>
void circonferenza(int *_c, int _r);
void area(int *_a, int _r);
int main(){
    float r=0, c, a;
    do{
        printf("inserisci il valore del raggio: ");
        scanf("%f",&r);

    }while(r<=0);

    circonferenza(&c, r);
    area(&a, r);
    printf("l'area è: %.2f e il perimetro è: %.2f",&a,&c);
    return 0;
}
void circonferenza(int *_c, int _r){
    *_c=2*3.14*_r;
}
void area(int *_a,int _r){
     *_a=_r*_r*3.14;
}
