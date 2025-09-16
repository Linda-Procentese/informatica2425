/*stampare i primi n numeri dispari successivi al numero a
a=8 n=3
9 11 13*/
#include <stdio.h>

void mostranumeri (int _a, int _n);

int main(){
	int n,a;
	do{
		printf("inserisci un valore  a e un valore n: ");
		scanf("%d%d",&a,&n);
	}while(n<=0 || a<=0);
	
	
	mostranumeri(a,n);
	
	return 0;
	
}
void mostranumeri (int _a, int _n){
	int i;
	
	if(_a%2==0)
		_a++;
	else
		_a+=2;
		
	for(i=1; i<=_n; i++){
		printf("%d\n",_a);
		_a+=2;
		
	}
}