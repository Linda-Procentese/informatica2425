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
        return 1;
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
    
}

void sommaMultip(int *_array,int _n, int *_somma){
    for(int i=0; i<_n; i++){
        if(_array[i]/3==0){
            _somma=+_array[i];
        }
        printf("la somma dei numeri multipli di 3 è: ",_somma);
        if(_somma==0){
            printf("non ci sono numeri multipli di 3 in questo array \n");
        }
    }
    
}

int * arrayDispari(int *_array2, int *_array,int *_dispari, int _n){
    for(int i=0; i<_n; i++){
        if(_array[i]/2!=0)
            _array2[i]=_array[i];
            _dispari++;
    }
    if(_dispari!=0){
        _array2=allocaArray(_dispari); 
        stampaArray(_array2, _dispari);

    }
    return _array2;
}

int main(){
    int * array=NULL;
    int * array2=NULL;
    int n, somma=0, dispari=0;

    do{
        printf("inserisci la quantità che vuoi inserire nell'array: ");
        scanf("%d", &n);
    }while(n<0);

    array=allocaArray(n);
    array=inserisciValori(array, n);
    stampaArray(array, n);
    sommaMultip(array,n, &somma);
    array2=arrayDispari(array2,array,&dispari, n);
    return 1;
}