/*
    Sviluppiamo le funzioni
*/
#include <stdio.h>
#include "libreria.h"//prototipi delle funzioni

void richiedivalori(int vett[],int dim){
    int n=0;

    while(i<dim)){
        printf("inserisci un valore: ");
        scanf("%d",&n);
        if(n%2==0){
            vett[i]=n;
            i++;
        }
    }
}

void stampavett(int vett[],int dim, char sep){
    for(int i=0;i<dim;i++){
        printf("%d%c",vett[i], sep);
    }
}
