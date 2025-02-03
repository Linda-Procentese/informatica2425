/*trova i primi 3 numeri perfetti 
la somma dei suoi divisori è uguale al numero stesso

crea una funzione che restituisca la somma dei divisori di un numero;*/

void mostrasomma (int _num);
#include <stdio.h>
int main(){
	int num;
	
	mostrasomma(num);
	
	return 0;
}
void mostrasomma (int _num){
	int i=0, j=0, _somma=0;
	for(i=1; i<=500;i++){
		for(j=1; i<=_num/2; j++){
			if(_num%j==0)
				_somma+=j;
			

		}
		if(_somma==_num)
			printf("%d\t",_somma);
		
	}
	
	
}
	