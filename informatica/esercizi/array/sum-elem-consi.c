/*Caricare
da tastiera un vettore di N elementi. Scorrendo il vettore, al primo
zero incontrato stampare la somma di tutti gli elementi considerati e
il loro numero;*/
#include <stdio.h>
#define DIM 10

void caricaVettore(int vettore[],int dim){
	int i;
	for(i=0;i<dim;i++){
        printf("inserici l'elemento in posizione di %d: ", i);
        scanf("%d",&vettore[i]);
}
void stampaVettore(int vettore[], int dim, char simb){
	int i;
	for(i=0;i<dim;i++){
		printf("%d%c",vettore[i],simb);
	}
}
void stampaSomma(int vettore[],int*_cnt){
	int somma=0, i=0,cnt2=0;
	while(vettore[i]!=0){
		printf("+%d",vettore[i]);
		*_cnt+=1;
		somma+=vettore[i];
		i+=1;
	}

	printf("la somma dei primi %d numeri nel vettore =%d ",*_cnt,somma);
}

int main(){
    int vett[DIM],cnt=0,i;

	caricaVettore(vett,DIM);
    for(i=0;i<DIM;i++){
 		stampaVettore(vett,DIM,'-');
        if(vett[i]==0){
        	stampaSomma(vett,&cnt);
		}
	}
}