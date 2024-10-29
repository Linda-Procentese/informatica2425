/*Leggere un carattere e dire se è una vocale
*/
#include <stdio.h>
int main(){
    char lettera1='!', lettera2=' ';

    printf("Inserisci un carattere: ");
    scanf("%c", &lettera1);

    if(lettera1=='a' || lettera1=='e' || lettera1=='i' || lettera1=='o' || lettera1=='u' || lettera1=='A' || lettera1=='E' || lettera1=='I' || lettera1=='O' || lettera1=='U') 
        printf("la lettera %c è una vocale\n", lettera1);
    else 
        printf("la lettera %c NON è una vocale\n", lettera1);
    
    lettera1 = lettera1 + 32;
    printf("%c", lettera1);
    return 0;
}