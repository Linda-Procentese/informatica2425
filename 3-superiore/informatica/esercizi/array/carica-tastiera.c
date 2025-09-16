/*costruire un vettore di n elementi
con valori letti da tastiera*/
#include<stdio.h>
#define max 5
int main(){
    int v[max];
    for(int i=0;i<max;i++){

        printf("\ninserisci un valore per il valore %d dell'array: ",i);
        scanf("%d",&v[i]);
        printf("\narray=%d\t",v[i]);
        
    }
    
    
}