/*Esercizio
Calcola l'area di un triangolo inserendo la base e l'altezza.*/

#include <stdio.h>
int main ()
{
	float base=0, altezza=0, area=0;
	printf("inserisci la base del triangolo: ");
	scanf("%f", &base);
	printf("\n inserisci l'altezza del triangolo: ");
	scanf("%f", &altezza);
	area=(base*altezza)/2;
	printf("\n l'area del triangolo vale: %.2f", area);
}