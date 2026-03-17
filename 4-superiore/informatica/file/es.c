//file con struct
#include <stdio.h>

typedef char* stringa;
typedef struct persona{
    stringa nome[20];
    int eta[100];
    float media[10];
}persona;

int main(){
    FILE *file=fopen("dati.txt","w");
    persona *p1=NULL;

    if(file==NULL){
        printf("errore apertura file \n");
        return 1;
    }
    printf("inserisci il nome dello studente:");
    scanf("%s",& )
    fprintf(file,"%s %d %.2f","luca",12,6.5);
    
    fclose(file);
    return 0;
}
