/*data la struct prodotto:
-nome
-codice(int)
-quantità
-prezzo

eseguire
1.inserire prodotto
2.stampare elenco prodotti
3.cercare un prodotto per codice
4.calcolare il valore totale del magazzino*/

#include <stdio.h>
#include <stdlib.h>

typedef char* stringa;
typedef struct prodotto{
    stringa nome[20];
    int codice=0;
    int quantità=0;
    float prezzo=0;
}prodotto;

typedef struct Lista{
    Auto* testa;
    int lunghezza;
}Lista;


===Funzioni===
Lista* crea_lista(){
    Lista *parco_auto=(Lista*)malloc(sizeof(Lista));
    parco_auto->lunghezza=0;
    parco_auto->testa=NULL;
    return parco_auto;
    
}

int main(){
    Lista *magazzino=crea_lista();
    int scelta;
    char c;
    do {
        printf("\n===== AUTONOLEGGIO 2000 =====\n");
        printf("1. Inserisci nuova auto\n");
        printf("2. Visualizza auto\n");
        printf("3. Elimina auto\n");
        printf("0. Esci\n");
        printf("Scelta: ");

        scanf("%d", &scelta);
        while((c = getchar()) != '\n') {}

        switch (scelta) {
            case 1:
                inserisciAuto(parco_auto);
                break;
            case 2:
                stampaAuto(parco_auto);
                break;
            case 3: 
                char t[9];
                printf("inserisci la targa dell'auto che vuoi eliminare: ");
                fgets(t, 9, stdin);
                elimna_auto(t,parco_auto);
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        } 
    } while (scelta != 0);

    return 0;
}