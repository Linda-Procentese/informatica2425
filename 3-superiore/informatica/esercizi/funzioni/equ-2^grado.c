/*assegati i coefficenti di
 un'equazione di secondo grado
 -determina le soluzioni dell'equazione
 -determina la concavità delle parabola
*/
#include <stdio.h>
#include <math.h>
float soluzioni(float _a, float _b,float _c );
int main(){
    int a,b,c;
    
        printf("inserisci i valori A B e C di un equazione di secondo grado: ");
        scanf("%d%d%d",&a,&b,&c);
    
    soluzioni(a,b,c);


}
float soluzioni(float _a, float _b, float _c ){
    //delta  x1,x2
    float x1=0,x2=0;
    double delta;

    if(_a==0){
        delta=(_b*_b)-4*(_c);

        x1=(-_b+(sqrt(delta)));
        x2=(-_b-(sqrt(delta)));
    }
    else if(_b==0){
        delta=-4*(_a)*(_c);
        x1=(sqrt(delta))/2*_a;
        x2=x1;
    }
    else if(_c==0){
        delta=(_b*_b)-4*(_a);
        x1=(-_b+(sqrt(delta)))/2*_a;
        x2=(-_b-(sqrt(delta)))/2*_a;
    }
    else{
        delta=(_b*_b)-4*(_a)*(_c);
        x1=(-_b+(sqrt(delta)))/2*_a;
        x2=(-_b-(sqrt(delta)))/2*_a;
    }

    if(delta<0){
        printf("non ci sono risultati perche il delta è %.2lf", delta);
    }
    if(delta==0){
        printf("il delta è %.2lf e il risultati dell'equazione è: %.2f",delta,x1);
    }
    if(delta>0){
        printf("il delta è %.2lf e i risultati dell'equazione sono: %.2f e %.2f",delta,x1,x2);
    }
    

}