/*Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.*/
#include <stdio.h>

#define n 5

void caricaMat(int *_mat[n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("carichiamo la matrice, inserisci un valore intero: \n");
            scanf("%d", &_mat[i][j]);
        }
    }
void stampaMat(int *_mat[n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("ecco la matrice %d \n",_mat[i][j]);
        }
    }
}

void scambioDiag(int *_mat[n]){
    int j, tmp;
    for(int i=0; i<n; i++){
        j=n-i-1;
        tmp=_mat[i][i];
        _mat[i][i]=_mat[i][j];
        _mat[i][j]=tmp;
        
    }
}
    
}
int main(){
    int matrice[n][n];
    
    
    caricaMat(matrice);
    stampaMat(matrice);
    scambioDiag(matrice);
    stampaMat(matrice);

}