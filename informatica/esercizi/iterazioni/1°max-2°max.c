/* Data una serie di N numeri
 (con N scelto dall'utente maggiore di 3) determinare il valore più grande
  e quello immediatamente inferiore (il secondo).*/
  #include <stdio.h>
  int main(){
    int n,num, max1, max2;
    do{
        printf("inserisci un numero maggiore di 3: ");
        scanf("%d",&n);

    }while(n<=3);
    printf("inserisci un numero: ");
    scanf("%d",&num);
    max1=num;

    printf("inserisci un numero: ");
    scabf("%d",&num);

    if(num>max2){
    max2=max1;
    max1=num;}
    for(int i=2; i<n; i++){
        printf("inserisci un numero: ");
        scanf("%d",&num);

    
        if(num>max1){
            max2=max1;
            max1=num;}
        else if(num>max2 && num!=max1)
        max2=num;
        
    }
    printf("il valore più grande è: %d e quello immediatamente inferiore è: %d",max1,max2);
  }