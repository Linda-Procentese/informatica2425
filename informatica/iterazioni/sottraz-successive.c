/*calcola il quoziente fra 2 numeri applicando il
 metodo delle sottrazioni successive*/
 #include <stdio.h>
 int main(){
    int a, b,quoz=0,cnt=0;
    
    do{
        printf("inserisci il primo valore: ");
        scanf("%d",&a);
        printf("inserisci il secondo valore: ");
        scanf("%d",&b);

    }while(a<=0 || b<=0);
    
    if(b<a){
        quoz=a;
        do{quoz-=b;
            cnt++;
        }while(quoz>=b);
        printf("%d/%d=%d",a,b,cnt);
    }
    else{
        quoz=b;
        do{quoz-=a;
            cnt++;
        }while(quoz>=a);
        printf("%d/%d=%d",a,b,cnt);

    }
 }