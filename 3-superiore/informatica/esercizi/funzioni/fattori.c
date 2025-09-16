/*dato un valore stampare i suoi fattori
es: 28=2*2*7 -->28/2 14/2 7
es: 36=2*13*/
#include <stdio.h>
void fattori(int *_n);
int main(){
	int n;
	do{
		printf("inserisci un valore: ");
		scanf("%d",&n);
	}while(n<=0);
	
	printf("i fattori di %d sono: ",n);
	fattori(&n);
	 return 0;
}
void fattori(int *_n){
	int f=2;
	
	while(f>1 && *_n>1){
		if(*_n%f==0){
			*_n=*_n/f;
			printf("%d*",f);
			f=1;
		}
		f++;
	}
}