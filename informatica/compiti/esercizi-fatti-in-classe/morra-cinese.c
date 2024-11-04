/*Gioco
della Morra cinese: supponendo sasso=1, carta=2, forbice=3, 
chiedere all’utente la sua scelta e far generare al computer la sua.
Stabilire il vincitore.
N.B.:per chi non conoscesse il gioco: sasso vince forbice, 
sasso perde carta, carta perde forbice.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int sceltautente, sceltacomputer;

    sceltacomputer=rand()%3+1; //%3 (perchè 3 è il numero di scelte)/ +1 (perche la scelta sarebbe 0-1-2-3 ma noi vogliamo il raggio 1-2-3 quindi aggiungiamo 1)
    printf("scegli tra sasso=1, carta=2, forbice=3: ");
    scanf("%d",&sceltautente);

    if(sceltautente==1 || sceltautente==2 || sceltautente==3){
        if(sceltacomputer==sceltautente)
            printf("pareggio");
        else if(sceltautente==1 && sceltacomputer==3)
            printf("hai vinto utente");
        else if(sceltautente==2 && sceltacomputer==1)
            printf("hai vinto utente");
        else if(sceltautente==3 && sceltacomputer==2)
            printf("hai vinto utente");
        else
            printf("ha vinto il pc");
    }else
        printf("errore");
}