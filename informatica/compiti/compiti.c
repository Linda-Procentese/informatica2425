/*Calcola il costo sostenuto dalla scolaresca per andare a teatro
sapendo che il biglietto ordinario costa 12 euro, i 2 docenti accompagnatori hanno lo sconto del 50% 
e che il numero degli alunni deve essere letto in INPUT.*/
#include <stdio.h>
int main()
{
    float numerostudenti=0, costobiglietto=0, costobigliettoscontato=0 ,numerodocenti=0, sconto=0, costodocenti1=0, costodocenti2=0, costotot=0;
    numerodocenti=2;
    costobiglietto=12;
    sconto=50;
    printf("inserisci numero alunni: ");
    scanf("%f", &numerostudenti);
    costodocenti1=2*(12*50);
    costodocenti2=costodocenti1/100;
    costotot=(numerostudenti*12)+costodocenti2;
    printf("il costo totale sostenuto dalla scolaresca per andare a teatro vale: %.2f", costotot);
}