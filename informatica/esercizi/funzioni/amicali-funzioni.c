/*amicali funzioni
data una sequenza di numeri verificare quanti valori presi a coppie sono amicali si termina quando uno dei valori è zero*/
#include <stdio.h>
void amicali(int _n, int _n2);

int main(){
	int n, n2;
	while(n>0 || n2>0){
		printf("inserisci una coppia di valori: ");
		scanf("%d%d",&n,&n2);
		amicali (n,n2);
	}
}
void amicali(int _n, int _n2){
	int somma1=0, somma2=0;
	for( int _div1=1; _div1<=_n/2; _div1++){
		if(_n%_div1==0){
			somma1+=_div1;
		}
	}
	for(int _div2=1; _div2<=_n2/2; _div2++){
		if(_n2%_div2==0){
			somma2+=_div2;
		}
	}
	if(somma1==_n2 && somma2==_n)
		printf("%d e %d sono amicali\n",_n,_n2);
	else 
		printf("%d e %d non sono amicali\n",_n,_n2);

}
