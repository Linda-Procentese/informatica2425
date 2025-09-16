#include <stdio.h>
void fattoriale(int *_n,long *_fatt);
int main(){
    int n=0;
    long fatt=1;
    do{printf("inserisci un numero: ");
        scanf("%d",&n);}while(n<=0);

    fattoriale(&n, &fatt);
    printf("il fattoriale è: %ld",fatt);
    
}
void fattoriale(int *_n,long *_fatt){
    
    for(int i=1; i<=*_n;i++){
        *_fatt*=i;
    }
    
}