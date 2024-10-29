/*dati due numeri A e B stabilire se A è minore, 
maggiore ouguale a B*/
#include <stdio.h>
int main ()
{
    int A=0, B=0;
    printf("inserisci il primo valore: ");
    scanf("%d",&A);
    printf("inserisci il secondo valore: ");
    scanf("%d",&B);
    if (A==B)
        printf(" %d è uguale di %d ",A,B);
    else
        if (A<B)
        printf(" %d è minore di %d ",A,B);
    else
        printf(" %d è maggiore di %d ",A,B);
    
}