/*dato un valore eseguire la confersione da decimale a vùbinario*/
#include <stdio.h>
#include <math.h>
long converti (int _n);
int main(){
    int n=0;
    long int conv=0;

    do{
        printf("inserisci un valore: ");
        scanf("%ld",&n);
    }while(n<=0);

    conv=converti(n);
    printf("%ld",conv);
}
long converti (int _n){
    int q, r, cnt=0, _conv;
    q=_n;
    while(q!=0){
        r=q%2;
        q=q/2;
    _conv=pow(10,cnt);
    cnt++;
}
return _conv;
}