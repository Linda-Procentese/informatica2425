/*dato un valore eseguire la confersione da decimale a vùbinario*/
#include <stdio.h>
void conv(int _n);

int main(){
    int n;
    do{
        printf("inserisci un numero");
        scanf("%d",&n);
    }while(n<=0);

    conv=conv(n);
    printf("%d",conv);

}
void conv(int _n){
    int q,r,conv;
    conv=0;
    q=_n;
    while(q!=0){
        r=q%2;
        q=q/2;
        conv+=r*pow(10,cnt);
        cnt++;
        r=0;
    }
    return conv;
}