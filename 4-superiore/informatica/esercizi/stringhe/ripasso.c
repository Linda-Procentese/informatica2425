/* DATE DUE STRINGHE SCRIVERE LA 
STRINGA IN ALTERNATA
CIAO
CASA
CCIAASOA */
/* Date due stringhe riportarle in una stringa a caratteri alternati */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* String;

void compatta(String buffer, int len){

    if(len>0 && buffer[len-1]=='\n'){
            buffer[len-1] = '\0';
            len--;
    }
}

void alterna(String s1, String s2, String s3){
    int i,j=0;
    for(i=0; i<strlen(s1) || i<strlen(s2); i++){
        if(i<strlen(s1)){
            s3[j]=s1[i];
            j+=1;
        }
        if(i<strlen(s2)){
            s3[j]=s2[i];
            j+=1;
        }
    }
    s3[j]='\0';
}

int main(){
    int i,j=0, len;

    String s1 = (String)malloc (50 * sizeof(char)); //prima stringa
    if (s1 == NULL) return 1;

    printf("Inserisci una stringa: ");
    fgets(s1, 50, stdin);
    len = strlen(s1);
    compatta(s1,len);

    String s2 = (String)malloc (50 * sizeof(char)); //seconda stringa
    if (s2 == NULL) return 1;

    printf("Inserisci una stringa: ");
    fgets(s2, 50, stdin);
    len = strlen(s2);
    compatta(s2,len);

    String s3 = (String)malloc (50 * sizeof(char)); //seconda stringa
    if (s3 == NULL) return 1;
    alterna(s1,s2,s3);
    printf("La parola alternata e\' %s",s3);
    return 0;
}


/* DATA UNA STRINGA INIZIALE E IL FATTORE DI 
CIFRATURA CREARE LA STRINGA CIFARTA */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

string cifra(string str, int key){
    int len = strlen(str);
    int i=0, controllo;

    string tmp = malloc(len*sizeof(char));
    if(tmp == NULL){
        printf("Errore nell'allocazione della memoria.\n");
        exit(1);
    }
    while(str[i] != '\0'){
        controllo = 0;
        printf("%c", str[i]);
        if( str[i] + key > 122 ){
            controllo = 26;
        }
        tmp[i] = str[i] + key - controllo;
        i++;
    }
    return tmp;
}

int main(){
    string stringa = malloc(200*sizeof(char));
    string stringacifrata;
    int fattore;

    printf("Inserisci la stringa: ");
    fgets(stringa, 200, stdin);
    printf("Inserisci il fattore di cifratura: ");
    scanf("%d", &fattore);

    stringacifrata = cifra(stringa, fattore);
    printf("Stringa cifrata: %s\n", stringacifrata);
    free(stringa);
    free(stringacifrata);
    return 0;
}


/* Verificare se una stringa è palindroma 
    Es: anna è palindroma
       ciao non è palindroma */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

int lunghezza(String s){
    int i=0;
    while (s[i] != '\0'){
        i++;
    }
    return i-1;
}
int Palindroma(String s, int dim){
    int flag=0, i, j;
    for( i=0, j=dim-1; i<dim/2; i++, j--){
        if(s[i]!=s[j])
            flag=1;
    }
    return flag;
}
int main(){
    int dim=0, palindroma=0;

    String s = (String)malloc(50*sizeof(char));
    if (s==NULL) return 1;

    printf("Inserisci una stringa: ");
    fgets(s, 50, stdin);
    printf("\n%s", s);
    dim = lunghezza(s);
    printf("\n%d", dim);
    palindroma = Palindroma(s,dim);
    if(palindroma==1)
        printf("\nLa frase non è palindroma");
    else    
        printf("\nLa frase è palindroma");
}


/* DATA UNA STRINGA TROVARE UNA SOTTOSTRINGA SENZA UTILIZZARE LA 
LIBRERIA STRING.H*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

void compatta(String buffer, int len){
    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1] = '\0';
        len--;
    }
}

int cerca(String _str, String _word){
    int i=0, j=0, trovata=0;
    while( _str[i]!='\0' && _word[j]!='\0' && !trovata){
        while( _str[i] == _word[j] && _word[j]!='\0'){
            i+=1; j+=1;
        }
        if ( _word[j] =='\0')
            trovata=1;
        else
            trovata=0;  
    i+=1; j=0;
    }
    return trovata;
}

int main(){
    int n, len;

    String stringa = (String)malloc (sizeof(stringa) * sizeof(char));
    if (stringa == NULL) return 1;

    printf("Inserisci una parola o frase: ");
    fgets(stringa, 50, stdin); 
    len = strlen(stringa);
    compatta(stringa,len);

    //inserisci la parola
    String parola = (String)malloc (sizeof(parola) * sizeof(char));
    if (parola == NULL) return 1;

    printf("Inserisci una parola o frase: ");
    fgets(parola, 50, stdin);
    len = strlen(parola);
    compatta(parola,len);
    n = cerca (stringa,parola);
    if(n)
        printf("\nParola trovata");
    else
        printf("\nParola non trovata");
}


/* Eliminare gli spazi da una stringa */
//Data una stringa eliminare gli spazi
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* String;

void eliminaSpazi(String s){
    int i,j;
    for(i=0; s[i]!='\0'; i++){
        if (s[i]==' '){
            for(j=i; s[j] != '\0'; j++){
                s[j]=s[j+1];
            }   
            s[j]='\0';
        }
    }
}

int main(){
    String s = (String)malloc (50 * sizeof(char));
    if (s == NULL) return 1;
    printf("Inserisci una stringa: ");
    fgets(s, 50, stdin);
    eliminaSpazi(s);
    printf("\n%s", s);  
}


/* DATA UNA STRINGA CREARE LA STRINGA ALL'INVERSO 
   SCAMBIANDO GLI ELEMENTI */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char* String;

void flip(String s){
    char tmp;
    for(int i=0; i<strlen(s)/2; i++){
        tmp=s[i];
        s[i]=s[strlen(s)-i-1];
        s[strlen(s)-i-1]=tmp;
    }
}

int main(){
    String s = (String)malloc(sizeof(s)*sizeof(char));
    if (s == NULL) return 1;

    printf("Inserisci la parole o frase: ");
    fgets(s, 50, stdin);
    flip(s);
    printf("la stringa invertita vale: %s", s);
    free(s);
    return 0;
   }


/*DATA UNA STRINGA CONTARE IL NUMERO DELLE VOCALI */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* String;

void compatta(String buffer, int len){
    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1] = '\0';
        len--;
    }
}

int conteggio(String frase){
    int cnt=0;
    for(int i=0; frase[i] != '\0'; i++){
        char c = tolower(frase[i]);
        if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            cnt++;
    }
    return cnt;
}

int main(){
    char buffer[200];
    String frase;

    printf("Inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);
    int len = strlen(buffer);
    compatta(buffer,len);

    frase = (String)malloc((len+1)*sizeof(char));
    if(frase==NULL){
        printf("C'è un errore\n");
        return 1;
    }
    strcpy(frase,buffer);
    printf("Il numero delle vocali è: %d", conteggio(frase));
    free(frase);
    return 0;
}