#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libArray.h"
#include "libArray.c"
int main(){
    srand(time(NULL));
    int v[10] = {0};
    riempiVettoreCasuale(v, 10, 0, 10);
    int d = sizeof(v)/sizeof(v[0]);
    printf("\ndim: %d\n\n\n", d);
    stampaVettore(v, 10, '\n');
    return 0;
}