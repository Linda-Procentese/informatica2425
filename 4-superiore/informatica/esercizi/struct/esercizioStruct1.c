/*crea una struttura squadra con (nome colore e punteggio) le squadre
 non devono essere piu di 10 e stampa le squadre con punteggio 
 maggiore a 100*/
 #include <stdio.h>
 #include <stdlib.h>

 typedef struct{
    char nome[20];
    char colore[20];
    int punteggio;
 }squadra;

 void stampa(squadra* teams, int n){
   for(int i=1;i<=n;i++){
      printf("dati squadra numero %d: %s, %s, %d\n",i,teams[i].nome ,teams[i].colore ,teams[i].punteggio);
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
    for(int i=0; i<n; i++){
      printf("inserisci il nome della squadra: ");
      scanf("%s",teams[i].nome);
      while ((c = getchar()) != '\n'){}

      printf("inserisci il colore della squadra: ");
      scanf("%s",teams[i].colore);
      while ((c = getchar()) != '\n'){}

      printf("inserisci il punteggio della squadra: ");
      scanf("%d",&teams[i].punteggio);
      printf("\n\n");
   }
   stampa(teams,n);
    

 }