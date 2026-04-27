/*scrivere un programma in linguaggio c che:
1.allochi dinamicamente un array iniziale di n numeri
2.inserimento dei valori
3.stampa array
4.calcoli la somma degli elementi multipli di 3
5.creiamo un nuovo array contenente solo valori dispari*/

#include <stdio.h>
#include <stdlib.h>

int * allocaArray(int _n){
    int * _array=(int*)malloc(_n * sizeof (int));
    if(_array==NULL){
        printf("errore\n");
        return NULL;//exit(1);
    }
    return _array;
}

int * inserisciValori(int *_array, int _n){
    for(int i=0; i<_n; i++){
        printf("inserisci un valore: \t");
        scanf("%d",&_array[i]);
    }
    return _array;
}

void stampaArray(int *_array,int _n){
    printf("ecco i valori dell'array: \t");
    for(int i=0; i<_n; i++)
        printf("%d\t", _array[i]);
    printf("\n");
}

int calcolaSomma(int *_array, int _n){
    int somma=0;
    for(int i=0; i<_n;i++){
        if(_array[i]%3==0)
            somma+=_array[i];
    } 
    return somma;
}

int * estraiDispari(int *_array, int _n,int *_dimdispari){
    int *_dispari=NULL;
    for(int i=0;i<_n;i++){
        if(_array[i]%2!=0){
            (*_dimdispari)++;
            int *tmp=realloc(_dispari, (*_dimdispari)*sizeof(int));//tmp viene usato per non perdere tutti i dati in caso si verifichi un errore nella riallocazione in memoria
            if(tmp==NULL){
                printf("\nerrore");
                free(_dispari);//se non va a buon fine liberiamo la memoria
                return NULL;
            }
            _dispari=tmp;
            _dispari[(*_dimdispari)-1]=_array[i];
        }
    }
    return _dispari;
}


int main(){
    int * array=NULL;
    int * dispari=NULL;
    int n, somma=0,dimdispari=0;

    do{
        printf("inserisci la quantità che vuoi inserire nell'array: ");
        scanf("%d", &n);
    }while(n<0);

    array=allocaArray(n);
    array=inserisciValori(array, n);
    stampaArray(array, n);
    printf("\nla somma degli elementi divisibili per 3 vale: %d\n", calcolaSomma(array, n));
    //creiamo l'array2
    dispari=estraiDispari(array,n,&dimdispari);
    printf("\nl'array contenente gli elementi dispari risulta: \n");
    stampaArray(dispari, dimdispari);
    free(array);
    free(dispari);
}