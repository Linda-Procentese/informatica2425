/*scrvere una funzione che preso in ingresso
 il nome del file contenente interi, 
 lo modifichi in modo tale da contenere 
 gli stessi numeri ma ordinati in senso 
 decrescente*/

 #include <stdio.h>
#include <stdlib.h>

void ordinaFile (char nomeFile[]){
    FILE *Fp;//putatoe che unta al file
    int vett[100],i=0, n;

    Fp=fopen (nomeFile, "r");
    if(Fp==NULL){
        printf("ERRORE APERTURA FILE\n");
        return 1;
    }
    //lettura dei numeri di file
    while(fscanf(Fp,"%d",&vett[i])==1){
        printf("elemento %d: %d \n",i+1,vett[i]);
        i++;
    }
    fclose(Fp);
    //ordiniamo i valori
    n=i;
    for(i=0;i<n;i++){
        
    }
}

int main(){
    char nome[20];

    printf("inserire il nome del file: ");
    scanf("%s",nome);

    ordinaFile(nome);
}