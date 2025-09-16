/*introduzione array*/
#include <stdio.h>
#define max 10//serve se abbiamo piudi un array e vogliamo dare a tutti gli array lo stesso valore
int main(){
    int v[max]; //contiene 10 valori da 0 a 9
    for(int i=0;i<10;i++){
        v[i]=1;
        printf("%d\n",v[i]);
    }
    return 0;
}