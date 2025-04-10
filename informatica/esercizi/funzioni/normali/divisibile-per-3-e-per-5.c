/*
Verificare se un numero dato in input è divisibile sia per 3 sia per 5
*/
#include <stdio.h>

int main ()
{	int a=0;
    printf("inserisci il valore: ");
    scanf("%d",&a);
    if(a%3==0)
        if(a%5==0)
            printf("il valore è divisibile sia per 3 sia per 5");
        else
            printf("il valore non è divisibile per 3 ma non per 5");
    else
        printf("il valore non è divisibile per 3");
}
