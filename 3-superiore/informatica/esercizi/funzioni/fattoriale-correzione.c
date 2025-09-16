#include <stdio.h>
long fattoriale(int _n);
int main(){
    int n=0;
    long fatt;
    do{printf("inserisci un numero: ");
        scanf("%d",&n);}while(n<=0);
    fatt=fattoriale(n);
    printf("il fattoriale è %ld",fatt);
}
long fattoriale(int _n){
    long sumfat=1;
    for(int i=1; i<=_n;i++){
        sumfat*=i;
    }
    return sumfat;
}