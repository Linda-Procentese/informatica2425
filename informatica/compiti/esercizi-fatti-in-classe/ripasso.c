/*1 voto viene inserito dall'utente e un voto dal computer(compreso tra 4 e 8) e fai scegliere all'utente tra:
1-media
2-voto maggiore
3-voto minore
4-mostrare il voto sufficente tra i due
verificare infine se il voto inserito sia compreso tra due e dieci
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int voto1, voto2, scelta, max, min;
    float media;
    printf("inserisci il primo voto: ");
    scanf("%d",&voto1);

if(voto1>=2 && voto1<=10){
        printf("\nil voto inserito è compreso tra due e dieci");

    srand(time(NULL));
    voto2=rand()%5+4;
    printf("\nil secondo voto scelto a caso è: %d",voto2);

    
    
    printf("\n\nscegli se: ");
    printf("\n1- fare la media ");
    printf("\n2- vedere quale dei due numeri è maggiore ");
    printf("\n3- vedere quale dei due numeri è minore ");
    printf("\n4- mostrare il voto sufficente tra i due: ");
    scanf("%d",&scelta);

    

    switch (scelta){
        case 1:
            media=(voto1+voto2)/2;
            printf("la media è: %.2f",media);
        break;
        case 2:
            max=voto1;

            if(max<voto2)
                max=voto2;
            else
                max=voto1;
                
            printf("\nil voto maggiore è %d",max);
        break;
        case 3:
            min=voto1;

            if(min>voto2)
                min=voto2;
            else
                min=voto1;

            printf("\nil voto minore è %d",min);
        break;
        case 4:
            if(voto1>=6 && voto2>=6)
                printf("\nsono entrambi sufficenti");

            else if(voto1>=6)
                printf("\nl'unico voto sufficente è %d",voto1);

            else if(voto2>=6)
               printf("\nl'unico voto sufficente è %d",voto2);

            else
                printf("\nnessuno dei due voti è sufficente");

        break;
    
    default:
        printf("\nerrore");
    }
    }

    else
        printf("\nil voto inserito non è compreso tra due e dieci");
}