/*amicali funzioni
data una sequenza di numeri verificare quanti valori presi a coppie sono amicali si termina quando uno dei valori è zero*/
#include <stdio.h>
void amicali(int _n);
int main(){
	int n;
	do{
		printf("inserisci un valore: ");
		scanf("%d",&n);
	}while(n<=0);
}
void amicali(int _n);