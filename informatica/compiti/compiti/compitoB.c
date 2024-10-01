/* Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.*/
#include <stdio.h>

int main ()
{
    float a=0. b=0, c=0, bc=0, media=0;
    printf("inserisci il 1' valore: ");
    scanf("%d",&a);
    printf("inserisci il 2' valore: ");
    scanf("%d",&b);
    printf("inserisci il 3' valore: ");
    scanf("%d",&c);
    if(a==b==c)
    {printf("i tre numeri sono uguali");}
    else
    if (a<b&c)
    printf("il numero più piccolo è: %f",a);
}