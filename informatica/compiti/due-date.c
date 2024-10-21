/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE.*/
#include <stdio.h>
int main(){
    int g1, m1, a1, g2, m2, a2, bisestile1, bisestile2, somma1, somma2;
    printf("scrivi la prima data, inserendo il giorno: ");//richiuesta datiinput
    scanf("%d",&g1);
    printf("scrivi la prima data, inserendo il mese: ");
    scanf("%d",&m1);
    printf("scrivi la prima data, inserendo l'anno: ");
    scanf("%d",&a1);

    printf("scrivi la seconda data, inserendo il giorno: ");
    scanf("%d",&g2);
    printf("scrivi la seconda data, inserendo il mese: ");
    scanf("%d",&m2);
    printf("scrivi la seconda data, inserendo l'anno: ");
    scanf("%d",&a2);
    //data1
    //controllo se l'anno è bisestile
    if(a1%100==0 && a1%400==0){
            printf("il primo anno è bisestile");
            bisestile1=1;}
    else if (a1%4==0){
            printf("il primo anno è bisestile");
            bisestile1=1;}
    
    //controllo se il mese è accettabile e se i giorni sono accettabili
    if (m1>=1 && m1 <=12){
        if (m1==2){
            if(g1>=1 && g1<=28+bisestile1)
                printf("\nLa prima data è accettabile");
            else
                printf("\nLa prima data non è accettabile");}
        else{
            if( m1==11 || m1==4 || m1==6 || m1==9){
                if (g1>=1 && g1<=30)
                    printf("\nLa prima data è accettabile");
                else
                    printf("\nLa prima data non è accettabile");}
            else{
                if (g1>=1 && g1<=31)
                    printf("\nLa prima data è accettabile");
                else
                    printf("\nLa prima data non è accettabile");}}}
    else
        printf("\nLa prima data non è accettabile");
    
    //data2
    if(a2%100==0 && a2%400==0){
            printf("\nil secondo anno è bisestile");
            bisestile2=1;}
    else if (a2%4==0){
            printf("\nil secondo anno è bisestile");
            bisestile2=1;}
    
    
    if (m2>=1 && m2<=12){
        if (m2==2){
            if(g2>=1 && g2<=28+bisestile2)
                printf("\nLa seconda data è accettabile");
            else
                printf("\nLa seconda data non è accettabile");}
        else{
            if( m2==11 || m2==4 || m2==6 || m2==9){
                if (g2>=1 && g2<=30)
                    printf("\nLa seconda data è accettabile");
                else
                    printf("\nLa seconda data non è accettabile");}
            else{
                if (g2>=1 && g2<=31)
                    printf("\nLa seconda data è accettabile");
                else
                    printf("\nLa seconda data non è accettabile");}}}
    else
        printf("\nLa seconda data non è accettabile");
    
    //DETERMINARE LA DATA PIU' RECENTE.
    if(a1>a2)
        printf("la prima data è più recente");
    else if (a1==a2){
        if(m1>m2)
            printf("la prima data è più recente");
        else if(m1==m2){
            if(g1>g2)
                printf("la prima data è più recente");
            else if (g1==g2)
                printf("le date sono uguali");
        else 
            printf("la seconda data è più recente");}
        
        else 
            printf("la seconda data è più recente");
    }
    else 
        printf("la seconda data è più recente");
    
}