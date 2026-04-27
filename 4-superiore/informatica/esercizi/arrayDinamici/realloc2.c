/*Scrivi un programma in C che:
    1.chiede all'utente quanti numeri interi vuole inserire;
    2.alloca dinamicamente un array di quella dimensione con malloc();
    3.permette all'utente di inserire i numeri;
    4.chiede all'utente se vuole aumentare la dimensione dell'array;
        -se si, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
        -permette quindi di inserire i nuovi valori negli spazi aggiunti;
    5.infine, stampa tutti gli elementi dell'array. */

    #include <stdio.h>
    #include <stdlib.h>

    int * allocaArray(int _dim){
        int * _array=(int *)malloc(_dim * sizeof(int));
        if(_array==NULL){
            printf("errore\n");
            return NULL;
        }
        return _array;
    }
    int * caricaArray(int * _array,int _dim){
        for(int i=0; i<_dim;i++){
            printf("inserisci il %d valore: ",i);
            scanf("%d\t",&_array[i]);
        }
        return _array;
    }

    void stampaArray(int *_array, int _dim){
        for(int i=0; i<_dim; i++){
            printf("%d\t",_array[i]);
        }
    }
    int main(){
        int * array=NULL;
        int dim=0, n=0, dim2=0;
        int scelta;

        do{
            printf("\ninserisci la quantità che vuoi inserire nell'array: ");
            scanf("%d", &dim);
        }while(dim<0);

        array=allocaArray(dim);
        array=caricaArray(array, dim);
        printf("\nvuoi aumentare la dimensione dell'array? 1/2");//punto 4
        scanf("%d",&scelta);
        if(scelta==1){
            printf("\ninserisci la quantità che vuoi aggiungere  o togliere all'array: ");
            scanf("%d", &n);

            array=realloc(array, (dim+n) * sizeof(int));
            if(n>0){
                for(int i=dim; i<dim+n; i++){
                    printf("\ninserisci i numeri che vuoi aggiungere: ");
                    scanf("%d",&array[i]);
                }
            }
            else 
                printf("\nelementi tolti.");
        }
        else if(scelta==2)
            printf("\nnon aumento ne sottraggo nessun valore all'array.");
        else
            printf("\nnon  hai inserito un valore valido per la scelta.");

        
        stampaArray(array,dim+n);//punto 5

    }
