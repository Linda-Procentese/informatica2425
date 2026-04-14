/*Esempio di apertura file in append*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char frase[200];
    char scelta;

    //apriamo il file in append
    fp=fopen("dati.txt","a");

    if(fp==NULL){
        printf("errore di apertura\n");
        exit (1);
    }
    do{
        printf("inserisci una frase: ");
        fgets(frase, sizeof(frase),stdin);
        //scriviamo la frase sul file
        fputs(frase,fp);

        printf("vuoi inserire un'altra frase? (s/n): ");
        scanf("%c",&scelta);
        getchar();
    }while(scelta=='s' || scelta=='S');

    fclose(fp);
    printf("le frasi sono state salvate sul file righe.txt\n\n\n\n");
    return 0;
}