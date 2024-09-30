/*DATI DUE NUMERI A e B VERIFICARE SE A è IL QUADRATO DI B*/
#include <stdio.h>
int main()
{
    float A=0, B=0;
    printf("inserisci il primo valore: ");
    scanf("%f",&A);
    printf("inserisci il secondo valore: ");
    scanf("%f",&B);
    B=B^2;
    if(A=B)
    printf("A è il quadrato di B: ");
    else
    printf("A non è il quadrato di B: ");
    return 0;
}