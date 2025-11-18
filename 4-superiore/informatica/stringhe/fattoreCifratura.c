/*data la stringa e il fattore di cifratura cifrare la stringa*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;


int dimensione(char* buffer){ 
    int len=0;
    while(buffer[len]!='\0')
        len++;
    
    return len;
}

int main(){

    char* frase=NULL;
    int len=0;
    char buffer[200];
    int fattore=0;

    printf("inserisci la frase da cifrare: ");
    fgets(buffer,sizeof(buffer),stdin);
    printf("inserisci il fattore di cifratura: ");
    scanf("%d", &fattore);
    len = dimensione(buffer);
    frase =(string)malloc((len+1)*sizeof(char));

    if(frase == NULL){
        printf("errore!");
    }

    strcpy(frase, buffer);
    for(int i=0;i<len-1;i++){
        if(frase[i] + fattore > 122){
            frase[i] += fattore - 26; 
        }
        else
            frase[i] += fattore;

    }
   printf("la frase cifrata è: %s", frase);

free(frase);
return 0;
}