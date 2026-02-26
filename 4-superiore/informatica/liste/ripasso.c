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
    int codice;
    int quantità;
    float prezzo;
    struct prodotto* next;
}prodotto;

typedef struct Lista{
    prodotto* testa;
    int lunghezza;
}Lista;


//===Funzioni===
Lista* crea_lista(){
    Lista *magazzino=(Lista*)malloc(sizeof(Lista));
    magazzino->lunghezza=0;
    magazzino->testa=NULL;
    return magazzino;
    
}

void set_prodotto(prodotto* nuovo_prodotto){
    printf(" === Inserimento nuovo prodotto ===\n");
    printf("Inserisci il nome: ");
    fgets(nuovo_prodotto->nome, 20, stdin);
    printf("Inserisci il codice: ");
    scanf("%d",&nuovo_prodotto->codice);
    printf("Inserisci la quantità: ");
    scanf("%d",&nuovo_prodotto->quantità);
    printf("Inserisci il prezzo: ");
    scanf("%f", &nuovo_prodotto->prezzo);
    char c;
    while((c = getchar()) != '\n') {}

}
void inserisciProdotto(Lista* lista) {
    prodotto* nuova=(prodotto*)malloc(sizeof(prodotto));
    if(nuova == NULL) {
        printf("Errore di allocazione");
        exit(1);
    }
    nuova->next=NULL;

    set_prodotto(nuova);
    if(lista->testa==NULL){
        lista->testa=nuova;
        lista->lunghezza++;

    }else {
        prodotto* temp=lista->testa;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=nuova;
        lista->lunghezza++;
    }
}

void stampaProdotto(Lista* magazzino){
    prodotto* temp=magazzino->testa;
    int i=0;
    while(temp!=NULL){
        printf("\n=== PRODOTTO %d ===\n", i+1);
        printf("%s %s %s %f€\n", temp->nome, temp->codice, temp->quantità, temp->prezzo);
        i++;
        temp=temp->next;
    }
}

oid cerca_prodotto(int codice, Lista* magazzino) {
    Canzone* temp = l->testa;
    int trovata = 0;
    printf("Ricerca canzoni dell'artista %s.......\n", artista);
    while (temp != NULL) {
        if (strcmp(temp->artista, artista) == 0) {
            stampa_canzone(temp);
            trovata = 1;
        }
        temp = temp->next;
    }
    if(trovata == 0) 
        printf("Non è stata trovata nessuna canzone per l'artista selezionato\n");
}

int main(){
    Lista *magazzino=crea_lista();
    int scelta;
    char c;
    do {
        printf("\n===== MAGAZZINO =====\n");
        printf("1. Inserisci nuovo prodotto\n");
        printf("2. stampare elenco prodotti\n");
        printf("3. cercare un prodotto per codice\n");
        printf("4. calcolare il valore totale del magazzino\n");
        printf("0. Esci\n");
        printf("Scelta: ");

        scanf("%d", &scelta);
        while((c = getchar()) != '\n') {}

        switch (scelta) {
            case 1:
                inserisciProdotto(magazzino);
                break;
            case 2:
                stampaProdotto(magazzino);
                break;
            case 3: 
                char t;
                printf("inserisci il codice del prodotto che vuoi cercare: ");
                scanf("%d",&t);
                cerca_prodotto(t,magazzino);
                break;
            case 4:

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