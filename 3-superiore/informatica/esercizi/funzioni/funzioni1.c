/*dato un numero stampare i suoi divisori*/
#include <stdio.h>

void mostra_divisori (int _num);
int main(){
	int num, div;
	do{
		printf("inserisci un numero: ");
		scanf("%d",&num);
	}while(num<=0);

	printf("i divisori di %d sono:",num);
	mostra_divisori(num);
	
	return 0;
	
}
void mostra_divisori(int _num){
	int i;
	for(i=1; i<=_num; i++){ //stampo tutti i divisori compreso se 
 //(se faccio i<=num/2 stampo tutti i suoi divisori tranne se stesso)
		if(_num%i==0)
			printf("%d \t",i);
	}
}
