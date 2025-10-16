/*
Verifica "ARRAY DINAMICI"

Dettagli compito
Si vuole gestire la raccolta dei punteggi di sportivi, 
ottenuta tramite prove selettive, con valori che oscillano 
dallo 0 ad un massimo di 180 punti. 
Lo studente deve gestire le seguenti richieste tramite un menù: 
1. l'aggiornamento periodico dei nuovi punteggi inseriti; 
   l'elenco ne può contenere al massimo 1000;
   (N.B. non è detto che l'elenco contenga effettivamente tutti e 1000);
2. visualizzare a schermo i punteggi inseriti;
3. determinare quanti hanno totalizzato un punteggio superiore ai 150 e 
   quanti un punteggio inferiore a 80;
4. successivamente all'inserimento di tutti i punteggi l'array viene modificato 
   eliminando i punteggi inferiori a 50;
5. ordinare i punteggi restanti dal più alto in classifica; 

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aggiornaPunt (int *_array, int _dim,int _punteggio, int _random_max, int _random_min ){
	printf("Sto aggiornando i punteggi \n");
    _punteggio = rand()%(_random_max - _random_min + 1) + _random_min;
    _array=(int *)realloc(_array,(_dim+1)*sizeof (int));
    if (_array == NULL){ 
        printf("errore \n");
        exit(1);
    }
                    
    _array[_dim]=_punteggio;
    _dim++;
    printf("il nuovo punteggio vale: %d \n",_punteggio);
    
}

void stampaArray(int *_array, int _dim){
	int i=0;
	if(_dim==0)
        printf("Array vuoto\n");
        printf("punteggi attuali all'interno dell'array':\t");
        for(i=0; i<_dim; i++){
			printf("%d\t",_array[i]);
		}
}

void visualizzaPunt (int *_array, int _dim, int _cntPuntsup, int _cntPuntInf){
	int i=0;
	for(i=0;i<_dim;i++){
        if(_array[i]>150){
            _cntPuntsup++;
		}
		else if(_array[i]<80){
            _cntPuntInf++;
		}
	}
	if(_cntPuntsup!=0) 
		printf("hanno totalizzato un punteggio superiore ai 150 punti %d sportivi \n",_cntPuntsup);
	else 
		printf("non sono stati trovati punteggi superiori ai 150 punti \n");
							
	if(_cntPuntInf!=0) 
		printf("hanno totalizzato un punteggio inferiore agli 80 punti %d sportivi \n",_cntPuntInf);
	else 
		printf("non sono stati trovati punteggi inferiori agli 80 punti \n");
}


void valoriEliminati(int *_array, int _dim, int _valori_eliminati){
	int i=0;
	_valori_eliminati=-1;
        for(i=0;i<_dim;i++){
            if(_array[i]<50){
				_valori_eliminati=i;
				            
			}
		}
		if (_valori_eliminati!=-1) {
			for(i=_valori_eliminati;i<_dim-1;i++)//sposta gli elementi da destra a sinistra di una posizione eliminando un elemento
			    _array[i]=_array[i+1];
			                    
			_dim--;
			_array=(int*)realloc(_array,_dim * sizeof(int));
			printf("Punteggio eliminato \n");
		} 
		else {
			printf("Punteggio non trovato \n");
		}
}
void bubbleSort(int *_array, int _dim){
    int temp;
    int flag=0;
    int i=0,j=0;
    while(flag==0){
        flag=1;
        for(j=0; j<_dim-1-i; j++){
            if(_array[j]>_array[j+1]){
                flag=0;
                temp=_array[j];
                _array[j]=_array[j+1];
                _array[j+1]=temp;
            }
        }
        i++;
    }
}



int main(){
	srand(time(NULL)); //inizia a generare numeri casuali
	
	int random_max=180;//inizializzo punti massimi
    int random_min=0;//inizializzo punti minimi
    
    int * array=NULL;//inizializzo l'array
    int scelta;//inizializzo la variabile che prenderà in input i valori scelti dal menù
    int dim=0;//inizializzo la dim dell'array
    
    int i=0;//inizializzo la varabile del for presente nel case2

    int punteggio;//inizializzo la funzione random
    
    int cntPuntsup=0;//inizializzo il contatore dei punteggi superiori a 150
    int cntPuntInf=0;//inizializzo il contatore dei punteggi inferiori a 80
    
    int cnt=0;//inizializzo il contatore del case 4 che conta
    
    int valori_eliminati=0;//inizializzo la variabile che conta quanti valori devono essere tolti dalla'array
    
    do{
            printf("\n\nMENU\n");//stampo il menù
            printf("1) Aggiornamento periodico dei nuovi punteggi inseriti \n");
            printf("2) Visualizzare a schermo i punteggi inseriti \n");
            printf("3) Determinare quanti hanno totalizzato un punteggio superiore ai 150 e quanti un punteggio inferiore a 80 \n");
            printf("4) Eliminanre i punteggi inferiori a 50 \n");
            printf("5) Ordinare i punteggi restanti dal più alto in classifica \n");
            printf("6) Uscire \n");
            printf("esegui una scelta:");
            scanf("%d", &scelta);
            
            switch(scelta){
                case 1://aggiornamento punteggi
                    aggiornaPunt (array,dim,punteggio,random_max,random_min );
                break;

                case 2:
                    stampaArray(array,dim);
                break;

                case 3:
                    visualizzaPunt (array,dim,cntPuntsup,cntPuntInf);
						
                break;

                case 4:
                	valoriEliminati(array,dim,valori_eliminati);
                break;

                case 5:
                	printf("sto ordinando l'array dal più alto in classifica \n");
                   	bubbleSort(array,dim);
                   	printf("punteggi attuali all'interno dell'array':\t");
                    for(i=0; i<dim; i++){
						printf("%d\t",array[i]);
					}
                        
                break;

                case 6:
                    printf("Programma terminato \n");
                    exit(1);
                break;

            }
	}while(scelta!=6);//il menù continua a venire stampato finche l'utente non sceglie l'opzione 6, cioè uscire dal programma
}