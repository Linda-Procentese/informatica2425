/*Esercizio
Scrivere il doppio di un numero fornito da tastiera
*/

#include <stdio.h>
 
int main() //inizio
{
	int a=0, doppio=0; //dichiarazione e assegnazione
	printf("inserisci un numero intero: "); //stampa richiesta all'utente
	scanf("%d", &a);
	doppio=a*a;
	printf("\n il doppio di questo numero vale: %d",doppio);
}