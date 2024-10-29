/*Dato un numero controllare se è divisibile o meno per 3 applicando
 la regola della somma delle cifre che compongono il numero. ES: 
   dato di input: 123 eseguo la somma delle sue cifre -> 1+2+3=6 ->  
   risultato 6 -> ok 6 è multiplo di 3.NNB: qualora il numero fosse 
   a più cifre vi fermate alla prima somma delle cifre e poi controllate se il risultato è divisibile per 3.*/
   #include <stdio.h>
   int main (){
        int num,r,q,cifra1,cifra2,cifra3;
        printf("inserisci un numero (compreso tra 1 e 1000) e controllero se è divisibile per 3: ");
        scanf("%d",&num);

        if(num<1 && num>=1000)
            printf("ERRORE");

        else{
            if(num<10){
            q = num / 10;
            r = num % 10;
            cifra1=r;
            printf("prima cifra : %d\n", r);}

            else if(num<100){
                q = num / 10;
                r = num % 10;
                cifra1=r;
                printf("prima cifra : %d\n", cifra1);
                r = q % 10;
                q = q / 10;
                cifra2=r
                printf("seconda cifra : %d\n", cifra2);
             }
            else{
                q = num / 10;
                r = num % 10;
                cifra1=r;
                printf("prima cifra : %d\n", cifra1);
                r = q % 10;
                q = q / 10;
                cifra2=r
                printf("seconda cifra : %d\n", cifra2);
                r = q % 10;
                q = q / 10;
                cifra3=r
                printf("terza cifra : %d\n", cifra3);
            }
        }
        
        if(num<10){
            if(num%3==0)
                printf("è divisibile per 3");
            }
        else if(num<100){
            if((cifra1+cifra2)%3==0)
                printf("è divisibile per 3");
        }
        else{
            if((cifra1+cifra2+cifra3)%3==0)
                printf("è divisibile per 3");
        }


   }