/*inizializza l'array conmultipli di 
2 stampalo al contrario*/
#include <stdio.h>
#define max 10
int main(){
    int v[max], j=1;
    for(int i=0;i<max;i++){//parte da 0 e va a 9
        v[i]=2*j;
        j++;
    }
    for(int i=max-1;i>=0;i--){
        printf("%d\t",v[i]);
    }
}