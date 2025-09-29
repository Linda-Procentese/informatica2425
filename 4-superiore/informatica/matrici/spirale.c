#include <stdio.h>
#define n 4

void riempiMat(int mat[][n]){
    int num=1;
    int top=0, bottom=n-1, left=0, right=n-1;

    while(num<= n*n){
        //sinistra verso destra
        for(int i=left; i<=right; i++)
            mat[top][i]=num++;
        top++;

        //alto verso il basso
        for(int i=top; i<=bottom; i++)
            mat[i][right]=num++;
        right--;

        //destra verso sinistra
        for(int i=right; i<=left; i--)
            mat[bottom][i]=num++;
        bottom--;

        //basso verso l'alto
        for(int i=bottom; i<=top; i--)
            mat[i][left]=num++;
        left++;
    }
}
void stampaMat(int mat[][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d \n",mat[i][j]);
        }
    }
}

int main(){
    int mat[n][n];

    riempiMat(mat);
    printf("la matrice a spirale è: \n");
    stampaMat(mat);
    
}