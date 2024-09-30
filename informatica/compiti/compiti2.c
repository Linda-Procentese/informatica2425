/* Calcola il resto ricevuto dal benzinaio: 
dopo aver inserito il numero di litri di carburante introdotto nel motorino 
e il costo al litro della benzina, il programma deve visualizzare l’importo da pagare. 
L’utente digita l’importo di una banconota di valore superiore a tale importo 
e il programma visualizza il resto della banconota che questi deve ricevere*/
#include <stdio.h>
int main ()
{
    float litricarburante=0, costobenzinaallitro=0, banconota=0, resto=0, costobenztot=0;
    costobenzinaallitro=1.80;
    printf("inserisci quanti liri di carburante vuoi prelevare: ");
    scanf("%f", &litricarburante);
    costobenztot=costobenzinaallitro*litricarburante;
    printf("\n importo da pagare: %.2f",costobenztot);
    printf("\n inserisci il valore della banconota che vuoi usare: ");
    scanf("%f", &banconota);
    resto=banconota-costobenztot;
    printf("\nil resto vale: %.2f",resto);
}
 