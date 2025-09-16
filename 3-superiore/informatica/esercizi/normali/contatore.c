/*Scrivi un programma in C che faccia inserire dei numeri interi all'utente:
 il programma si deve fermare quando la somma dei numeri inseriti raggiunge 100 
 oppure quando sono stati inseriti 5 numeri. Alla fine mostrare il numero di valori 
 inseriti dall'utente (usare contatore).*/
 #include <stdio.h>
 int main(){
    int num, somma;
    printf("ins un numero: ");
    scanf("%d",&num);
    somma=num;

    if(somma>100)
        printf("hai superato la soglia");
    else{
        printf("inserisci un altro numero");
        scanf("%d",&num);
        somma=somma+num;
    }
 }