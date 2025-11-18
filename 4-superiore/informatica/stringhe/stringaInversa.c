/*data una stringa scrivila inversa scambiando gli elementi*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* string;
int main(){
    string s1=NULL;
    int len=0;
    char buffer[200], tmp;

    printf("inserisci la frase che vuoi invertire: ");
    fgets(buffer,sizeof(buffer),stdin);
    len=strlen(buffer);
    s1=(string)malloc((len+1)*sizeof(char));
    if(s1==NULL)
        return 1;
    strcpy(s1,buffer);
    
    for(int i=0; i<len/2;i++){
        tmp=s1[i];
        s1[i]=s1[len-i-1];
        s1[len-i-1]=tmp;
    }
    printf("%s",s1);

    free(s1);
    return 0;
}