/*eliminare gli spazi da una stringa*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef char* string;

void compatta(string buffer, int len){
    if(len>0 && buffer [len-1] == '\n'){
        buffer[len-1]='\0';
        len--;
    }
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

int main(){
    char buffer[200];
    string frase=NULL;
    int len=strlen(buffer);
    char carattere;

    printf("inserisci una stringa: ");
    fgets(buffer, sizeof(buffer),stdin);
    printf("inserisci il carattere che vuoi togliere: ");
    scanf("%c",&carattere);

    compatta(buffer,len);
    frase=(string)malloc((len+1)*sizeof (char));
    if(frase==NULL){
        printf("errore");
        return 1;
    }

    strcpy(frase,buffer);
    senzaSpazi(frase, carattere);
    free(frase);
    return 0;
}