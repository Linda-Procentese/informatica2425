/*calcola il fattoriale di un numero*/
#include <stdio.h>
void mostrafattoriale(int _n, long int _fatt);
int main(){
    int n=0, fatt;
    do
    {printf("inserisci un numero: ");
    scanf("%d",&n);}while(n<=0);

    mostrafattoriale(n,fatt);

return 0;
}
void mostrafattoriale(int _n, long int _fatt){
    _fatt=1;
    for(int i=1;i<=_n; i++)
        _fatt*=i;
    printf("il fattoriale è: %ld ",_fatt);


}