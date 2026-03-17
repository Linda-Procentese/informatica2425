/*scrvere una funzione che preso in ingresso
 il nome del file contenente interi, 
 lo modifichi in modo tale da contenere 
 gli stessi numeri ma ordinati in senso 
 decrescente*/

 #include <stdio.h>
#include <stdlib.h>

void ordinaFile (char nomeFile[]){
    FILE *Fp;//putatoe che unta al file

    Fp=fopen (nomeFile, "r");
}

int main(){
    char nome[20];

    printf("inserire il nome del file: ");
    scanf("%s",nome);

    ordinaFile(nome);
}