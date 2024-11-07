/*Esercizio1
CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/
#include <stdio.h>
int main(){
    int n, k, q, r, contatore=0;
    printf("inserisci un numero: ");
    scanf("%d",&n);
    printf("inserisci un valore k: ");
    scanf("%d",&k);
    if(n>=0 && n<=9999){
        if(n<10){
            q=n/10;
            r=n%10;
            printf("la prima cifra è: %d",r);
            if(r==k){
                contatore=contatore+1;
            }}
        else if(n<100){
            q=n/10;
            r=n%10;
            printf("la prima cifra è: %d\n",r);
            if(r==k){
                contatore=contatore+1;}
            r=q%10;
            q=q/10;
            printf("la seconda cifra è: %d",r);
            if(r==k){
                contatore=contatore+1;}}
        else if(n<1000){
            q=n/10;
            r=n%10;
            printf("la prima cifra è: %d\n",r);
            if(r==k){
                contatore=contatore+1;}
            r=q%10;
            q=q/10;
            printf("la seconda cifra è: %d\n",r);
            if(r==k){
                contatore=contatore+1;}
            r=q%10;
            q=q/10;
            printf("la terza cifra è: %d",r);
            if(r==k){
                contatore=contatore+1;}}
        else{
            q=n/10;
            r=n%10;
            printf("la prima cifra è: %d\n",r);
            if(r==k){
                contatore=contatore+1;}
            r=q%10;
            q=q/10;
            printf("la seconda cifra è: %d\n",r);
            if(r==k){
                contatore=contatore+1;}
            r=q%10;
            q=q/10;
            printf("la terza cifra è: %d\n",r);
            if(r==k){
                contatore=contatore+1;}
            r=q%10;
            q=q/10;
            printf("la quarta cifra è: %d\n",r);
            if(r==k){
                contatore=contatore+1;}}
            printf("il numero di volte che si ripete k è: %d",contatore);
        
        
    }
    else 
        printf("errore");

}