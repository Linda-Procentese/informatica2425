#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* string;

void compatta(string buffer,int len){//toglie l'invio inserito dall'utente per evitare che venga letto dall' fgets
    if(len>0 &&buffer[len-1]=='\n'){
        buffer[len-1]='\0';//così quando l'utente inserisce invio termina automaticamente la stringa
        len--;
    }
}

int conteggio(string frase){//conta quanti caratteri sono vocali
    int cnt=0;
    for(int i=0; frase[i]!='\0';i++){
        char c=tolower(frase[i]);//controlliamo sia i caratteri maiuscoli e minuscoli usando quesa funzione (permette di trasformare tutti i caratteri maiuscoli in minuscoli)
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            cnt++;
        }
    }return cnt;
}

void senzaSpazi(string frase, char carattere){
    int j=0;
    for(int i=0; frase[i]!='\0';i++){
        if(frase[i]!=carattere){
            frase[j]=frase[i];
            j++;
        }
    }
    frase[j]='\0';
    printf("ecco la stringa senza il carattere: %s ",frase);
}