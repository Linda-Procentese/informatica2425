/*Scrivete una funzione avente due parametri interi(passati per valore) 
b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/
#include <stdio.h>
int potenza(int _b, int _e);
int main(){
    int b, e, pot;
    do{
        printf("inserisci un numero B: ");
        scanf("%d",&b);
        printf("inserisci un numero E: ");
        scanf("%d",&e);
    }while(b<=0 || e<=0);

    pot=potenza(b,e);
    printf("%d^%d=%d",b,e,pot);

}
int potenza(int _b, int _e){
    int _pot;
    _pot=_b;
    for(int i=1; i<=_e; i++);{
        _pot*=_b;}
    return _pot;
}