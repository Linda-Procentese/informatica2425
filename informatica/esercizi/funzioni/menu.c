/*Scrivi un programma che permetta di memorizza i dati delle temperature medie di due città. Il programma associa alle due città un ID (1 per la città 1, 2 per la città 2) e poi chiede di inserire un nuovo valore di temperatura. Il programma termina quando viene inserito l'ID 0.
Suddividere il programma in:
funzione inserisci_temp(ID_città)
funzione mostra_media_città(ID_città)
funzione mostra_medie()
funzione calcola_media(ID_città)*/

#include <stdio.h>
#include <stdlib.h>
#define NUM_CITTA 2
float temp1=0,temp2=0;
int count1=0,count2=0;

void inserisci_temp(int ID_citta);
void mostra_media_citta(int ID_citta);
void mostra_medie();
float calcola_media(int ID_citta);
void mostraMenu();

int main(){
    int IDcitta;
    int scelta;
    do{
        mostraMenu();
        scanf("%d", &scelta);
        switch (scelta)
        {
        case 1:
            printf("definisici l'ID della citta: ");
            scanf("%d", &IDcitta);
            inserisci_temp(IDcitta);
            break;
        case 2:
            printf("definisici l'ID della citta: ");
            scanf("%d", &IDcitta);
            mostra_media_citta(IDcitta);
            break;
        case 3:
            mostra_medie();
            break;
        case 0:
            printf("Il programma sta per terminare\a");
            break;
        default:
            printf("Opzione non valida");
            break;
        }
        

    }while(scelta!=0);
}
void mostraMenu(){
    system("clear");
    printf("Scegli un valore per eseguire un'azione:\n");
    printf("1.Inserisci temperatura di una città\n");
    printf("2.Mostra il valore di una città\n");
    printf("3.Mostra i valori di tutte le città\n");
    printf("0.Termina il programma\n");
}
void inserisci_temp(int ID_citta){
    float T;
    printf("inserisci una temperatura per la città %d: ", ID_citta);
    scanf("%f", &T);
    switch (ID_citta)
    {
        case 1:
            temp1+=T;
            count1++;
            break;
        case 2:
            temp2+=T;
            count2++;
            break;
        
        default:
            printf("\nHai inserito un valore non valido!\n");
            break;
        }
}

void mostra_medie(){
    for(int i = 1; i<=NUM_CITTA; i++){
        mostra_media_citta(i);
    }
}

void mostra_media_citta(int ID_citta){
    float t = calcola_media(ID_citta);
    printf("\nLa media della città %d è %f.\n", ID_citta, t);
    
}

float calcola_media(int ID_citta){
    switch (ID_citta)
    {
        case 1:
            return temp1/count1;
        case 2:
            return temp2/count2;
        default:
            printf("\nHai inserito un valore non valido!\n");
            break;
    }
    return 0;
}