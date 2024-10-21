/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica
; una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/
#include <stdio.h>
int main(){
    int n1, n2, n3, t, c1, c2;
    printf("inserisci tre valori: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n2<n1)
        t=n1;
        n1=n2;
        n2=t;

    if(n3<n1)
        t=n1;
        n1=n3;
        n3=t;

    if(n3<n2)
        t=n2;
        n2=n3;
        n3=t;

    printf("i numeri in ordine sono %d %d %d: ",n1,n2,n3);

    c1=n2-n1;
    c2=n3-n2;

    if(c1==c2)
        printf("questi tre numeri possono essere considerati in progressione aritmetica");
    else
        printf("questi tre numeri non possono essere considerati in progressione aritmetica");
}