/*Chiedi all'utente 5 numeri e mostrali in ordine crescente.*/
#include <stdio.h>
int main()
{
    int a=0, b=0, c=0, d=0, e=0, t=0;
    printf("inserisci il primo valore:");
    scanf("%d", &a);
    printf("inserisci il secondo valore:");
    scanf("%d", &b);
    printf("inserisci il terzo valore:");
    scanf("%d", &c);
    printf("inserisci il quarto valore:");
    scanf("%d", &d);
    printf("inserisci il quinto valore:");
    scanf("%d", &e);

    if(b<a){
        t=b;
        b=a;
        a=t;
    }
    if(c<a){
        t=c;
        c=a;
        a=t;
    }
    if(d<a){
        t=d;
        d=a;
        a=t;
    }
    if(e<a){
        t=e;
        e=a;
        a=t;
    }
    if(c<b){
        t=c;
        c=b;
        b=t;
    }
    if(d<b){
        t=d;
        d=b;
        b=t;
    }
    if(e<b){
        t=e;
        e=b;
        b=t;
    }
    if(d<c){
        t=d;
        d=c;
        c=t;
    }
    if(e<c){
        t=e;
        e=c;
        c=t;
    }
    if(e<d){
        t=e;
        e=d;
        d=t;
    }
    printf("i numeri in ordine crescente sono: %d %d %d %d %d",a ,b ,c ,d ,e );
}