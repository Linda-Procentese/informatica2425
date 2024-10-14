/*data una data informato gg mm aaaa
verificare se la data è accettabile (cioè che esiste)*/
#include <stdio.h>
int main()
{
    int giorno=0, mese=0, anno=0, bisestile=0;
    printf("inserisci un giorno: ");//richiesta dati di ingresso
    scanf("%d",&giorno);
    printf("\ninserisci un mese: ");
    scanf("%d",&mese);
    printf("\ninserisci un anno: ");
    scanf("%d",&anno);
    //controllo dell'anno
    /*un anno è bisestile se è divisibile per 4 ma non 
    per 100 oppure è divisibile per 400*/

    if(anno%100==0 && anno%400==0){
            printf("L'anno è bisestile");
            bisestile=1;}
    else if (anno%4==0){
            printf("L'anno è bisestile");
            bisestile=1;}
    
    //controllo del mese e del giorno
    if (mese>=1 && mese <=12){
        if (mese==2){
            if(giorno>=1 && giorno<=28+bisestile)
                printf("\nLa data è accettabile");
            else
                printf("\nLa data non è accettabile");}
        else{
            if( mese==11 || mese==4 || mese==6 || mese==9){
                if (giorno>=1 && giorno<=30)
                    printf("\nLa data è accettabile");
                else
                    printf("\nLa data non è accettabile");}
            else{
                if (giorno>=1 && giorno<=31)
                    printf("\nLa data è accettabile");
                else
                    printf("\nLa data non è accettabile");}}}
    else
        printf("\nLa data non è accettabile");
    
}