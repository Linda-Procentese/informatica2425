/*stabilire se un n è dispari, controllando
l'ultima cifra meno significativa*/
#include <stdio.h>
int main()
{
    int n1=0, cifra=0;
    printf("inserisci un valore: ");
    scanf("%d",&n1);
    cifra=n1%10;
    if(cifra%2==0)
        printf("il numero %d è pari",n1);
    else
        printf("il numero %d è dispari",n1);
}