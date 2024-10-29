#include <stdio.h>
int main ()
{
    float n1=0, n2=0, n3=0, max=0, min=0, media=0;
    printf("inserisci i 3 valori: ");
    scanf("%f%f%f",&n1, &n2, &n3);
    max=n1;
    min=n1;
    if(max<n2){
        max=n2;
        if(max<n3)
            max=n3;
    }
    else
    {
        if(max<n3) //puo funzionare anche senza questa parte
            max=n3;
    }
    printf("il massimo è: %.2f",max);
    if(min>n2){
        min=n2;
        if(min>n3)
            min=n3;
    }
    else
        if(min>n3)//e questa parte
            min=n3;
    printf("\nil minimo è: %.2f",min);
    media=(n1+n2+n3)/3;
    printf("\nla media è: %.2f",media);
}