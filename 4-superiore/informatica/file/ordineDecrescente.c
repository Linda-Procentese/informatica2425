/*scrvere una funzione che preso in ingresso
 il nome del file contenente interi, 
 lo modifichi in modo tale da contenere 
 gli stessi numeri ma ordinati in senso 
 decrescente*/

#include <stdio.h>
#include <stdlib.h>

void ordinaFile (char nomeFile[]){
    FILE *Fp;//puntatore che punta al file
    int vett[100],i=0, n=0, j, tmp;

    Fp=fopen (nomeFile, "r");
    if(Fp==NULL){
        printf("ERRORE APERTURA FILE\n");
        return;
    }
    //lettura dei numeri di file
    while(fscanf(Fp,"%d ",&vett[n])==1){
        /*fscanf legge i dati e li mette in vett se restituisce 
        0 vuol dire che non ha letto il numero
        LO SPAZIO DOPO %Dùd è NECESSARIO, LHO MESSO E HA FUNZIONATO TUTTO*/ 
        printf("Elemento %d: %d \n",n+1,vett[n]);
        n++;
    }
    fclose(Fp);
    //ordiniamo i valori (Bubble Sort)
    for(i=0;i<n-1;i++){
        for(j=i+1; j<n; j++){
            if(vett[i] < vett[j]){
                tmp=vett[i];
                vett[i]=vett[j];
                vett[j]=tmp;
            }
        }
    }
    //riapriao il file per scriverci i numeri ordinati
    Fp=fopen(nomeFile, "w");

    if(Fp==NULL){
        printf("ERRORE APERTURA FILE\n");
        return;
    }

    for(i=0 ; i<n ; i++){
        fprintf(Fp,"%d \n",vett[i]);
    }
    printf("ora vai a guardare nel file se i numeri sono stati ordinati in modo decrescente \n");
    fclose(Fp);
}

int main(){
    char nome[20];

    printf("inserire il nome del file: ");
    scanf("%s",nome);

    ordinaFile(nome);
}