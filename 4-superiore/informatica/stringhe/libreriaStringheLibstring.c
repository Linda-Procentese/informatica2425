/*provare la libreria string.h per le seguenti operazioni
1.calcolo lunghezza stringa
2.controllo stringhe uguali
3.copiare una stringa
4.cercare un carattere e comunicare la frequenza
5.concatenare due stringhe0
6.ricerca di una strnga nell'altra
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char * stringa;

void compatta(stringa buffer, int len){
    if(len>0 && buffer [len-1] == '\n'){
        buffer[len-1]='\0';
        len--;
    }
}
/*1


int main(){
    stringa s=NULL;
    char buffer[20];
    int len=0;

    printf("inserisci una stringa: ");
    fgets(buffer,sizeof(buffer),stdin);

    len=strlen(buffer);
    compatta(buffer,len);
    s=(stringa)malloc((len+1)*sizeof (char));
    strcpy(s,buffer);

    printf("la lunghezza della stringa è: %d",len);

    free(s1);
    exit(0);

}*/

/*2




int main(){
    stringa s1=NULL, s2=NULL;
    int len1=0, len2=0;
    char buffer1[20],buffer2[20];

    printf("inserisci la prima stringa: ");
    fgets(buffer1,sizeof(buffer1),stdin);

    printf("inserisci la seconda stringa: ");
    fgets(buffer2,sizeof(buffer2),stdin);

    len1=strlen(buffer1);
    len2=strlen(buffer2);

    compatta(buffer1,len1);
    compatta(buffer2,len2);

    s1=(stringa)malloc((len1+1)*sizeof (char));
    s2=(stringa)malloc((len2+1)*sizeof (char));

    strcpy(s1,buffer1);
    strcpy(s2,buffer2);
    
    if(strcmp(s1,s2)==0) printf("le stringhe sono uguali\n");
    else if (strcmp(s1,s2)<0) printf("le stringhe sono diverse\n");
    else if (strcmp(s1,s2)>0) printf("le stringhe sono diverse\n");

    free(s1);
    free(s2);
    exit(0);
    
}*/

/*3


int main(){
    stringa s1=NULL, s2=NULL;
    int len1=0, len2=0;
    char buffer1[20],buffer2[20];

    printf("inserisci la prima stringa: ");
    fgets(buffer1,sizeof(buffer1),stdin);


    len1=strlen(buffer1);
    len2=len1;

    compatta(buffer1,len1);

    s1=(stringa)malloc((len1+1)*sizeof (char));
    s2=(stringa)malloc((len2+1)*sizeof (char));

    strcpy(s1,buffer1);

    //copia stringa
    strcpy(s2,s1);
    printf("stringa 1: %s\n",s1);
    printf("stringa 2: %s",s2);

    free(s1);
    free(s2);
    exit(0);
}*/

/*4

int main(){
    stringa s=NULL;
    char buffer[20], carattere;
    int len=0, cnt=0;

    printf("inserisci una stringa: ");
    fgets(buffer,sizeof(buffer),stdin);

    len=strlen(buffer);
    compatta(buffer,len);
    s=(stringa)malloc((len+1)*sizeof (char));
    strcpy(s,buffer);

    printf("inserisci il carattere che vuoi cercare: ");
    scanf("%c",&carattere);

    for(int i=0;i<len;i++){
        if(s[i]==carattere){
            cnt++;
        }
    }
    printf("il carattere viene ripetuto %d volte nella stringa",cnt);
    free(s);
}
*/
/*5

*/

int main(){
    stringa s=NULL;
    char buffer[20], carattere;
    int len=0;

    printf("inserisci una stringa: ");
    fgets(buffer,sizeof(buffer),stdin);

    len=strlen(buffer);
    compatta(buffer,len);
    s=(stringa)malloc((len+1)*sizeof (char));
    strcpy(s,buffer);
}