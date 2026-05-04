/*CREARE UN PROGRAMMA CHE GESTISCA UNA LIBRERIA DOTATA DI DIVERSI LIBRI TALE DA POTER ESEGUIRE LE SEGUENTI OPERAZONI:
- AGGIUNTA/CREAZIONE DELLA LISTA DI LIBRI;
- RICERCA DI UN LIBRO;
- CANCELLAZIONE DI UN LIBRO;
- MODIFICA DELL'ISBN;
- SEPARARE LA LISTA DEI LIBRI IN DUE LISTE CONTENENTI RISPETTIVAMENTE I LIBRI CREATI PRIMA DEL 2000 E QUELLI DOPO;
TUTTO VIENE GESTITO DA FILE BINARI
typedef struct{
      char autore[30];
      char titolo[30];
      char ISBN[20];
      int anno;
}Libro;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
      char autore[30];
      char titolo[30];
      char ISBN[20];
      int anno;
}Libro;


void aggiuntaLibro(char nomefile){
    FILE*fp=fopen(nomefile,"ab");

    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    Libro l;

    printf("Inserisci l'autore del libro: ");
    scanf("%s",l.autore);
    getchar();

    printf("Inserisci il titolo del libro: ");
    scanf("%s",l.titolo);
    getchar();

    printf("Inserisci l'ISBN del libro: ");
    scanf("%s",l.ISBN);
    getchar();

    printf("Inserisci l'anno di uscita del libro: ");
    scanf("%s",l.anno);
    getchar();

    fwrite(&l,sizeof(Libro),1,fp);
    fclose(fp);

    printf("Contatto aggiunto!\n");
}


void ricercaLibro(char nomefile, char titoloTmp){
    FILE *fp=fopen(nomefile,"rb");
    Libro l;
    int trovato=0;

    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    while(fread(&l,sizeof(Libro),1,fp)==1 && !trovato){}
        if(l.titolo==titoloTmp){
            printf("libro trovato! \nautore: %s, titolo: %s, ISBN: %s, anno: %d",l.autore, l.titolo, l.ISBN, l.anno);
            trovato=1;
        }
}
if(!trovato){

}

void cancellazioneLibro(){

}

void modificaISBN(){

}

void separazioneFile(){

}

void stampaFile(){

}

int main(){
    int scelta=0;
    const char* file="biblioteca.dat";
    char titoloTmp[40];

    do{
        printf("\n ===MENù BIBLIOTECA===\n");
        printf("\n1.Aggiungi libro\n");
        printf("\n2.Ricerca diun libro\n");
        printf("\n3.Cancellazione di un libro\n");
        printf("\n4.Modifica dell' ISBN\n");
        printf("\n5.Separare la listadei libri in una sezione con i libri creati prima del 2000 e una dopo\n");
        printf("\n6.Stampa libri\n");
        printf("\n0.ESCI\n");
    }while(scelta!=0);

    switch(scelta){
        case 1:
            aggiuntaLibro(file);
            break;
        
        case 2:
            printf("inserisci iltitolodel libro chevuoi cercare:");
            scanf("%c",titoloTmp);
            ricercaLibro(file,titoloTmp);
            break;2

        case 3:
            cancellazioneLibro(file);
            break;

        case 4:
            modificaISBN();
            break;

        case 5:
            separazioneFile();
            break;

        case 6:
            stampaFile();
            break;

        case 0:
            printf("\nuscita dal file");
            break;
    }
}