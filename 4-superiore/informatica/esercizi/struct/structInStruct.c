/*creare una struct squadra (max 10 squadre)contenente le seguenti 
informazioni:nome, colore, punteggio e le informazioni del proprio allenatore 
(nome, cognome, titoli).
caricato un massimo di 10 squadre stampare quelle con punteggio superiore
 a 100 e numero di titoli per allenatore superore a 10*/
 #include <stdio.h>
 #include <stdlib.h>

 typedef struct squadra{
    char nome[20];
    char colore[20];
    int punteggio;
    struct allenatore{
        char nome[20];
        char cognome[20];
        int titoli;
    }mister;
 }squadra;

 void Stampa_Squadre_Punteggio_Sup_100(squadra* teams, int n){
   for(int i=1;i<=n;i++){
        if(teams[i].punteggio>100 && teams[i].mister.titoli>10){
            printf("la squadra numero %d ha punteggio superiore a 100 e numero di titoli per allenatore superore a 10, ecco i dati: %s, %s, %d, %s, %s, %d\n",i, teams[i].nome, teams[i].colore, teams[i].punteggio, teams[i].mister.nome,teams[i].mister.cognome, teams[i].mister.titoli );
        }
    }
 }

 int main(){
    squadra *teams;
    int n,c;

    do{
         printf("inserisci il numero di squadre che vuoi inserire (max 10): ");
         scanf("%d",&n);
    }while(n<0 || n>10);

    teams=(squadra*)malloc(sizeof(squadra));
    if(teams==NULL){
      printf("errore di allocazione");
      return 1;
    }
    for(int i=1; i<=n; i++){
      printf("inserisci il nome della squadra: ");
      scanf("%s",teams[i].nome);
      while ((c = getchar()) != '\n'){}

      printf("inserisci il colore della squadra: ");
      scanf("%s",teams[i].colore);
      while ((c = getchar()) != '\n'){}

      printf("inserisci il punteggio della squadra: ");
      scanf("%d",&teams[i].punteggio);

      printf("inserisci il nome del %d° allenatore: ",i);
      scanf("%s",teams[i].mister.nome);
      while ((c = getchar()) != '\n'){}

      printf("inserisci il cognome del %d° allenatore: ",i);
      scanf("%s",teams[i].mister.cognome);
      while ((c = getchar()) != '\n'){}

      printf("inserisci il numero di titoli del %d° allenatore: ",i);
      scanf("%d",&teams[i].mister.titoli);
      printf("\n\n");
    }
   
    Stampa_Squadre_Punteggio_Sup_100(teams,n);
    return 0;

 }

 