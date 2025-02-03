/*DATI  DUE  NUMERI  A  PIU' CIFRE
(STESSO NUMERO DI CIFRE) SCAMBIARE TRA DI LORO LE CIFRE DI POSIZIONE PARI
es: 4253 1681
    1283 4651*/
#include <stdio.h>
int main(){
    int n1=0, n2=0, q1=0, r1=0, q2=0, r2=0, pos1=1, pos2=1, cifrap1=0, cifrap2=0, t=0,somma1=0,somma2=0;
    do{
        printf("inserisci due numeri aventi tre cifre: ");
        scanf("%d%d",&n1,&n2);
    }while(n1<=0 ||n2<=0 || n1<100 && n1>999 || n2<100 && n2>999);


    q1=n1;
    q2=n2;
    while(q1!=0 && q2!=0){
        r1=q1%10;
        q1=q1/10;
        if(r1==pos1 && pos1%2==0)
            cifrap1=r1;
    
        r2=q2%10;
        q2=q2/10;  
        if(r2==pos2 && pos2%2==0)
            cifrap2=r2;

            t=cifrap1;
            cifrap1=cifrap2;
            cifrap2=t;

        while(pos1<=3 && pos2<=3){
            if(pos1==2 && pos2==2)
                r1*=10;
                r2*=10;
            if(pos1==3 && pos2==3)
                r1*=100;
                r2*=100;
            somma1+=r1;
            somma2+=r2;
        }        
            
        
        pos1++;
        pos2++;
    }
    

    printf("%d,%d",somma1,somma2);
  
}