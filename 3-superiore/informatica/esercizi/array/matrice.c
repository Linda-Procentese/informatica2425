/*crea una matrice*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void caricaMatrice(int mat[17][10], int max, int min);
void stampaMatrice(int mat[17][10]);
void caricaVett( int vett[10], int max, int min);
void stampoaVett(int vett[10]);
void caricavVett1(int vett1[17], unt mat[17][10], int vett[10]);
void stampaVett1(int vett1[17]);


int main(){
    srand(time(NULL)); //inizializza il generatore di numeri casulai
    int mat[17][10];
    int vett[10]; //vettore correttore
    int vett1[17];//vettore risultato
    int min=1;
    int max=4;

    caricaMatrice(mat, max, min);
    stampaMatrice(mat);
    caricaVett(vett, max, min);
    stamapVett(vett);
    caricaVett1(vett1, mat, vett);
    stampaVett1(vett1);

    return 0;
}


void caricaMatrice(int mat[17][10], int max, int min){
    for(int i=0; i<17; i++){
        for(int j=0; j<10; j++){
            mat[i][j]= min + (rand() % (max - min +1));
        }
    }
}

void stampaMatrice(int mat[17][10]){
    for()
}



void stampaVett(int vett[10]){
    printf("\n\n");
    for(int i=0; i<10;i++){
        printf("%d");
    }
}

void caricaVett1(int) vett1[17], int mat[17][10], int vett[10]{
    for(int i=0; i<17; i++){
        int contatore=0;
        for(int j=0; j<10; j++){
            if(mat[i][j]== vett[j]){
                contatore++;
            }
        }
        vett1[i]=contatore;
    }
}

void stampaVett1(int vett[17]){
    printf("\n\n");
    for(int i=0; i<18; i++){
        printf("%d", vett1[i]);
    }
}
    
