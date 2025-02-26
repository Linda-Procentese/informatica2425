/*sviluppare un programma in c che sviluppi il triangolo di floyd
n=5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
void triangolo(int _n);
#include <stdio.h>
int main(){
    int n;
    do{
        printf("inserisci un numero: ");
        scanf("%d",&n);
    }while(n<=0);
    triangolo
    
}
void triangolo(int _n){
    for(int riga=1;riga<=_n ;riga++){
        for(int a=1;a<=riga;a++){
            printf("%d\t",a);
        }
        printf("\n");
    }
}//non funziona