/*Scrivi un programma che chieda all'utente un n intero n compreso tra 1 e 26
quindi crea una stringa composta da tutte le n lettere dell'alfabeto
es: due punti n= 4
Stringa=a,b,c,d*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char * string;

int main(){
    char lettera='a';
    int n;
    string str;

    do{
        printf("inserisci un numero intero: ");
        scanf("%d",&n);
    }while(n<=0 || n>26);

    str=(string)malloc((n+1)*sizeof(char));
    if(str==NULL){
        printf("errore");
        return 1;
    }
    for(int i=0; i<n; i++){
        str[i]=lettera++;
        str[n]='\0';
        printf("% n-1['^\n']s",str);
    }
}