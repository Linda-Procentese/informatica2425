/*spotify*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ---- Definizione struct necessarie ---- */
typedef struct Canzone {
    int id;
    char titolo[50];
    char artista[50];
    int durata;
    struct Canzone* next;
} Canzone;

typedef struct Lista {
    Canzone* testa;
    int lunghezza;
} Lista;

/* ---- Variabile globale per gestire l'id univoco delle canzoni ---- */
int id_univoco = 0;

/* ---- Funzioni lista di canzoni disponibili ---- */
void stampa_canzone(Lista *c);
void set_canzone(Canzone *c);
Lista* crea_lista();
void stampa_lista(Lista *l);
void inserisci_canzone_lista(Lista *l);
void ricerca_canzone_artista(Lista *l, char* artista);
void libera_memoria(Lista* l);

/* ---- Funzioni playlist (lista circolare) ---- */
void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist);
void stampa_playlist(Lista* playlist);
void cancella_canzone_playlist(Lista *playlist);

/* ---- MAIN ---- */

int main() {
    Lista* lista_canzoni = crea_lista();
    Lista* playlist = crea_lista();

    int scelta;
    char artista[50];

    do {
        printf("\n===== SPOTIFY 0.0.0.1 =====\n");
        printf("1. Inserisci nuova canzone nella lista\n");
        printf("2. Stampa lista canzoni\n");
        printf("3. Cerca canzoni per artista\n");
        printf("4. Aggiungi canzone alla playlist\n");
        printf("5. Stampa playlist\n");
        printf("6. Cancella canzone dalla playlist\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar(); // pulisci buffer input

        switch (scelta) {
            case 1:
                inserisci_canzone_lista(lista_canzoni);
                break;
            case 2:
                stampa_lista(lista_canzoni);
                break;
            case 3:
                printf("Inserisci artista da cercare: ");
                fgets(artista, 50, stdin);
                ricerca_canzone_artista(lista_canzoni, artista);
                break;
            case 4:
                inserisci_canzone_playlist(lista_canzoni, playlist);
                break;
            case 5:
                stampa_playlist(playlist);
                break;
            case 6:
                cancella_canzone_playlist(playlist);
                break;
            case 0:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta != 0);

    libera_memoria(lista_canzoni);
    libera_memoria(playlist);
    return 0;
}

/* =======================================================================================
   Qui sotto vanno implementate le funzioni.
======================================================================================= */

void stampa_canzone(Canzone *c) {

    printf("\n=== CANZONE %d ===\n", i+1);
    printf("id: %d\n titolo: %s\n autore: %s\n durata: %d minuti\n", temp->id, temp->titolo, temp->artista, temp->durata);
    
}
void set_canzone(Canzone *c) {
    printf(" === Inserimento nuova canzone ===\n");
    printf("iserisci il titolo della canzone: ");
    fgets(c->titolo,50,stdin);
    printf("iserisci il nome dell'artista della canzone: ");
     
}

Lista* crea_lista() {
    Lista* l=(Lista*)malloc(sizeof(Lista));

    return NULL; //modificare valore di ritorno
}

void stampa_lista(Lista *l) {
    Canzone* temp = l->testa;
    int i=0;
    while(temp != NULL) {
        printf("\n=== CANZONE %d ===\n", i+1);
        printf("id: %d\n titolo: %s\n autore: %s\n durata: %d minuti\n", temp->id, temp->titolo, temp->artista, temp->durata);
        i++;
        temp=temp->next;
    }
}

void inserisci_canzone_lista(Lista *l) {
    Canzone* nuova_canzone = (Canzone*) malloc (sizeof(Canzone));
     if(nuova_canzone == NULL) {
        printf("Errore di allocazione");
        exit(1);
    }
    nuova_canzone->id = id_univoco++;
    nuova_canzone->next = NULL;
    set_canzone(nuova_canzone);

    if(l->testa==NULL){
        l->testa=nuova_canzone;
        l->lunghezza++;

    }else {
        Canzone* temp=l->testa;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=nuova_canzone;
        l->lunghezza++;
    }

}

void ricerca_canzone_artista(Lista *l, char* artista) {
    // TODO
}

void libera_memoria(Lista* l) {
    // TODO
}

void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist) {
    // TODO (inserimento in coda circolare)
}

void stampa_playlist(Lista* playlist) {
    // TODO (attenzione alla lista circolare)
}

void cancella_canzone_playlist(Lista *playlist) {
    // TODO (rimuovere nodo gestendo i casi speciali)
}