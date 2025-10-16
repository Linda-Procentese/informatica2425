/*Creare un array dinamico chiedendo all'utente la sua dimensione 
il programma deve prevedere le seguenti funzioni:
1-crea l'array
2-inserisce gli elementi nell'array
3-stampa valori
4-esci*/

#include <stdio.h>
#include <stdlib.h>

int * creaArray(int _n){
    int * _array=(int*)malloc(_n *sizeof(int));
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

int main(){
    int *array=NULL;
    int n;

    do{
        printf("inserisci la quantità che vuoi inserire nell'array: ");
        scanf("%d", &n);
    }while(n<0);

    array=creaArray(n);//funzione puntatore
    array=inserisciValori(array, n);
    stampaArray(array, n);
    return 1;
}