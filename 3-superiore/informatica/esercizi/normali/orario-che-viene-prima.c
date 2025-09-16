/*Scrivere un programma che letto due orari in ore, minuti e secondi restituisce quale orario viene prima.*/
#include <stdio.h>
int main(){
    int ore, m, s, ore1, m1, s1;
    printf("inserisci il primo orario: ");
    scanf("%d %d %d", &ore, &m, &s);
    printf("inserisci il secondo orario: ");
    scanf("%d %d %d", &ore1, &m1, &s1);

    if(ore>ore1)
        printf("il primo orario è più recente");
    else if (ore==ore1){
        if(m>m1)
            printf("il primo orario è più recente");
        else if(m==m1){
            if(s>s1)
                printf("il primo orario è più recente");
            else if (s==s1)
                printf("gli orari sono uguali");
        else 
            printf("il primo orario è più recente");}
        
        else 
            printf("il primo orario è più recente");
    }
    else 
        printf("il secondo orario è più recentee");
}