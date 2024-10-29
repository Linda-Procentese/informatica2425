/*Memorizzare il seme e il punteggio di due carte da poker. 
Dire quale delle carte vale di più.  Il valore di una carta 
da poker è dato in primo luogo dal punteggio e in caso di parità 
di punteggio dal seme.
I punteggi in ordine decrescente sono {k,q,j,9,8,7,6,5,4,3,2,1},
 i semi in ordine decrescente sono  {cuori, quadri, fiori, picche}
  per i semi memorizzare solo la lettera iniziale del seme.
PS: l’ordine dei semi può essere ricordato grazie alla frase 
“come quando fuori piove” in cui le parole ricordano i nomi 
dei semi (cuori, quadri, fiori, picche).*/

#include <stdio.h>

int main(){
    char seme1, seme2, valore1, valore2;
    printf("Inserisci il valore della prima carta: ");
    scanf("%c", &valore1);
    printf("inserisci il seme della prima carta: ");
    scanf(" %c", &seme1);
    printf("inserisci il valore della seconda carta: ");
    scanf(" %c", &valore2);
    printf("inserisci il seme della seconda carta: ");
    scanf(" %c", &seme2);
    if(valore1==valore2){ //controllo se i valori delle carte sono uguali
        if(seme1=='c' && seme2!='c'){ //se il seme della prima è cuori(il maggiore) e l'altro non è cuori (quindi è un seme con valore minore)
            printf("La prima carta è maggiore della seconda\n");
        }
        else if(seme1=='q' && seme2!='c' && seme2!='q'){ //se il seme della prima è quadri(il secondo maggiore) e l'altro non è cuori o quadri (quindi è un seme con valore minore)
            printf("La prima carta è maggiore della seconda\n");
        }
        else if(seme1=='f' && seme2!='c' && seme2!='q' && seme2!='f'){ 
            printf("La prima carta è maggiore della seconda\n");
        }
        else if(seme1==seme2){ //se arrivo qui il seme della prima carta è picche oppure è uguale al seme della seconda
            printf("Le due carte sono uguali\n");
        }
        else{ //in tutti i casi rimanenti
            printf("La seconda carta è maggiore della prima\n");
        }
    }
    else{ //se arrivo a questo else vuol dire che i due valori sono diversi
        if(valore1=='k' && valore2!='k'){
            printf("La prima carta è maggiore della seconda\n");
        }
        else if(valore1=='q' && valore2!='k' && valore2!='q'){
            printf("La prima carta è maggiore della seconda\n");
        }
        else if(valore1=='j' && valore2!='k' && valore2!='q' && valore2!='j'){
            printf("La prima carta è maggiore della seconda\n");
        }
        else if(valore1>valore2){
            printf("la prima carta è maggiore della seconda\n");
        }
        else{
            printf("La seconda carta è maggiore della prima\n");
        }
    }

    return 0;
}