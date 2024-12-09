/*Scrivi un programma in C che disegni usando degli asterischi * un triangolo rettangolo 
di lato 8 e poi un triangolo isoscele di base 9 e altezza 9.*/

#include <stdio.h>
int main(){

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(j==0 || i==7 || i==j){
                printf("*");
            }else
                printf(" ");
        }printf("\n");
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<9; j++){
            if(i==4 || j==4-i || j==4+i)
                printf("*");
            else
                printf(" ");
        }printf("\n");
    }


}