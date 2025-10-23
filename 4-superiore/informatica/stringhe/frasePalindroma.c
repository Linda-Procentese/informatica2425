/*capire se una parola è palindroma
es:
anna è palindroma
ciao non lo è*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char* string;

int lenght (string buffer){
    int len=0;
    while(buffer[len]!='\0')
        len++;

    return len;
}

void compatta(string buffer, int len){
    if(len>0 && buffer[len-1]!='\n'){
        buffer[len-1]='\0';
        len--;
    }
}

int palindroma(string frase,int len){
    int flag=0,i,j;
    for(int i=0;j=len-1;i<len/2 ;i++;j--){
        if(frase[i]!=frase[j])
            flag=1;//la frase è palindroma
    }
    flag=0;//non lo è
}

int main(){
    string frase=NULL;
    int len=0, pal;
    char buffer[200];
    

    printf("inserisci una stringa: ");
    fgets(buffer, sizeof (buffer), stdin);

    len=lenght(buffer);

    compatta(buffer, len);
    frase=(string)malloc((len+1)* sizeof (char));
    if(frase==NULL){
        printf("c'è un errore\n");
        return 1;
    }

    strcpy(frase,buffer);
    pal=palindroma(frase, len);

    if(pal == 1) printf("la frase è palindroma ");
    else printf("la frase non è palindroma ");
    
    free(frase);
    return 0;
    
}