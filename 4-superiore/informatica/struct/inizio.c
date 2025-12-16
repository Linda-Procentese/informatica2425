/*esempio di utilizzo di una struttura complessa
facendo accesso ai campi in modalità variabile 
e in modalità puntatore alla struttura*/
#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char nome[20];
    char cognome[20];
    int età;
}persona;

int main(){
    persona p1;//modalità variabile
    persona *p2;//modalità puntatore
    int c;

    //inseriamo le informazioni in p1
    printf("inserisci il nome della persona: ");
    scanf("%s", p1.nome);
    while ((c = getchar()) != '\n'){}

    printf("inserisci il cognome della persona: ");
    scanf("%s", p1.cognome);
    while ((c = getchar()) != '\n'){}

    printf("inserisci l'età della persona: ");
    scanf("%d",&(p1.età));
    while ((c = getchar()) != '\n'){}

    printf("Dati della persona:%s, %s, %d",p1.nome ,p1.cognome, p1.età);

    //inseriamo le informazioni in p2
    p2=malloc(sizeof (persona));
    printf("\ninserisci il nome della persona: ");
    scanf("%s", p2->nome);
    while ((c = getchar()) != '\n'){}

    printf("inserisci il cognome della persona: ");
    scanf("%s", p2->cognome);
    while ((c = getchar()) != '\n'){}

    printf("inserisci l'età della persona: ");
    scanf("%d",&(p2->età));
    while ((c = getchar()) != '\n'){}

    printf("Dati della persona:%s, %s, %d",p2->nome ,p2->cognome, p2->età);
}