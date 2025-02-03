#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); //inizia a generare numeri casuali

    int random_max=31;
    int random_min=1;

    int random = rand()%(random_max - random_min + 1) + random_min;

    printf("numero random: %d", random);




}