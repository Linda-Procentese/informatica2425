/*DATI DUE NUMERI A e B VERIFICARE SE A è IL QUADRATO DI B*/
#include <stdio.h>
int main()
{
    float A=0, B=0;
    printf("inserisci il primo valore: ");
    scanf("%f",&A);
    printf("inserisci il secondo valore: ");
    scanf("%f",&B);
    B=B*B;
    if(A==B)
    {
        printf("il primo valore %f è il quadrato del secondo %f",A,B);
    }
    else
    {
        printf("il primo valore %f non è il quadrato del secondo %f",A,B);
    }
}