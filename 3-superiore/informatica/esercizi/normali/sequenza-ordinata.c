/*Scrivi un programma che permetta all’utente di inserire 5 numeri interi e verifichi s
e questi numeri appartengono alla sequenza dei numeri naturali, cioè sono tutti differenti
 e hanno tra di loro distanza unitaria nella linea dei numeri. (ad esempio la sequenza 3-4-5-6-7
  è una sequenza adeguata, 3-4-5-7-8 non è una sequenza adeguata) */

#include <stdio.h>
int main(){
    int n1, n2, n3, n4, n5, temp;
    printf("inserisci un valore: ");
    scanf("%d", &n1);
    printf("inserisci un valore: ");
    scanf("%d", &n2);
    printf("inserisci un valore: ");
    scanf("%d", &n3);
    printf("inserisci un valore: ");
    scanf("%d", &n4);
    printf("inserisci un valore: ");
    scanf("%d", &n5);
    if(n2<n1){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    if(n3<n1){
        temp=n3;
        n3=n1;
        n1=temp;
    }
    if(n4<n1){
        temp=n4;
        n4=n1;
        n1=temp;
    }
    if(n5<n1){
        temp=n1;
        n1=n5;
        n5=temp;
    }
    if(n3<n2){
        temp=n2;
        n2=n3;
        n3=temp;
    }
    if(n4<n2){
        temp=n2;
        n2=n4;
        n4=temp;
    }
    if(n5<n2){
        temp=n2;
        n2=n5;
        n5=temp;
    }
    if(n4<n3){
        temp=n3;
        n3=n4;
        n4=temp;
    }
    if(n5<n3){
        temp=n3;
        n3=n5;
        n5=temp;
    }
    if(n5<n4){
        temp=n4;
        n4=n5;
        n5=temp;
    }
    if(n2==n1+1 && n3==n2+1 && n4==n3+1 && n5==n4+1)
                printf("la sequenza è ordinata.");
    else
        printf("la sequenza non è ordinata.");

            
        
        
    

}