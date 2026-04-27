/*data una stringa trovare la sotto stringa senza utilizzare la libreria string.h*/
#include <stdio.h>
#include <stdlib.h>
#iclude <string.h>
typedef char* string;

void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n'){}
}

int main(){
    string s1=NULL,s2=NULL;
    char buffer[200];
    int len, len2,flag=0;

    printf("inserisci la stringa principale: ");
    fgets(buffer,sizeof(buffer),stdin);

    len=strlen(buffer);
    s1=(string)malloc((len+1)*sizeof(char));
    if(s1==NULL)
        return 1;
    strcpy(s1,buffer);
    clear_buffer();

    printf("inserisci la stringa che vuoi cercare: ");
    fgets(buffer, sizeof(buffer),stdin);

    len2=strlen(buffer);
    s2=(string)malloc((len2+1)*sizeof(char));
    if(s2==NULL)
        return 1;
    strcpy(s2,buffer);

    for(int i=0;i<len;i++){
        if(s1[i]==s2[i]){
            while(flag==0){
                
            }

        }
    }
    



}