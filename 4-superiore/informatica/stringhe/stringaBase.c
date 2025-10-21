/*data una stringa contare il numero delle vocali*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef char* string;

void compatta(string buffer,int len){//toglie l'invio inserito dall'utente per evitare che venga letto dall' fgets
    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1]='\0';//così quando l'utente inserisce invio termina automaticamente la stringa
        len--;
    }
}

int conteggio(string frase){//conta quant caratteri sono vocali
    int cnt=0;
    for(int i=0; frase[i]!='\0';i++){
        char c=tolower(frase[i]);//controlliamo sia i caratteri maiuscoli e minuscoli usando quesa funzione (permette di trasformare tutti i caratteri maiuscoli in minuscoli)
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    char buffer[200];//buffer contiene la lunghezza della stringa (200)
    string frase;//array di caratteri

    printf("inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);//acquisizione caratteri inseriti dall'utente

    int len=strlen(buffer);//buffer è la lunghezza della stringa, usiamo  una funzione della libreria string.h che calcola la lunghezza
    compatta(buffer,len);//funzioni da implementare sopra
    frase=(string)malloc((len+1)* sizeof (char));

    if(frase==NULL){
        printf("c'è un errore\n");
        return 1;
    }

    strcpy(frase,buffer);//copia il contenuto del  buffer dentro frase

    printf("il numero delle vocali è: %d",conteggio(frase));//funzioni da implementare sopra

    free(frase);
    return 0;

}