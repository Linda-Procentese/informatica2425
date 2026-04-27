/*registrare le ifomazioni di alcuni libri: titolo, autore, anno pobblicazione 
1)array libri
2)caricare array
3)visualizza libri
4)rimuovere libro
5)cercare libro in base al titolo o all'autore*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titolo[20];
    char autore[20];
    int anno_pub;
}libri;

void stampa_libri(libri *l,int n){
    for(int i=0; i<n; i++){
        printf("dati squadra numero %d: %s, %s, %d\n",i,l[i].titolo ,l[i].autore ,l[i].anno_pub);
    }
}

void elimina_libro(libri *l,int n){
    printf("inserisci il titolo del libro che vuoi eliminare: ");
    
}

void cerca_libro(libri *l,int n){}

int main(){
    int n=0, c, scelta, scelta2;
    libri *l;

    do{
        printf("inserisci il numero di libri che vuoi inserire: ");
        scanf("%d",&n);
    }while(n<0 || n>10);

    l=(libri*)malloc(sizeof(libri));
    if(l==NULL){
      printf("errore di allocazione");
      return 1;
    }

    for(int i=0; i<n; i++){
      printf("inserisci il titolo del libro: ");
      scanf("%s",l[i].titolo);
      while ((c = getchar()) != '\n'){}

      printf("inserisci il nome dell'autore del libro: ");
      scanf("%s",l[i].autore);
      while ((c = getchar()) != '\n'){}

      printf("inserisci l'anno di pubblicazione del libro (in 4 cifre): ");
      scanf("%d",&l[i].anno_pub);
      printf("\n\n");
   }

   do{
        printf("\nMENU'");
        printf("\n1)visualizzare libri");
        printf("\n2)rimuovere un libro");
        printf("\n3)cercare libro in base al titolo");
        printf("\n premi 0 per terminare");
        scanf("%d",&scelta);

        switch(scelta){
            case 1 :{
                stampa_libri(l,n);
                break;
            }
            case 2 :{
                elimina_libro(l,n);
                break;
            }
            case 3 :{
                cerca_libro(l,n);
                break;
            }
            default:
            break;
        }

    }while(scelta!=0);
}