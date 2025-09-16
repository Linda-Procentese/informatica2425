/*dato il raggio calcolare la circonferena e l'area del cerchio*/
#include <stdio.h>
#define PI 3.14
void circonferenza(float _c, float _r);
void area(float _a, float _r);
int main(){
    float r=0, c, a;
    do{
        printf("inserisci il valore del raggio: ");
        scanf("%f",&r);

    }while(r<=0);

    circonferenza(c, r);
    area(a, r);
   
    return 0;}

void circonferenza(float _c, float _r){
    _c=2*PI*_r;
    printf("la circonferenza è: %.2f",_c);
    
}
void area(float _a, float _r){
     _a=_r*_r*PI;
    
    printf("l'area è: %.2f",_a);
     
}
