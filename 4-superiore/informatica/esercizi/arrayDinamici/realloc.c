/*Scrivere un programma in C che gestisca un insieme di numeri interi 
usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire*/

    #include <stdio.h>
    #include <stdlib.h>

    int main(){
        int *num=NULL; //array dinamico 
        int dim=0;//numero elementi nell'array
        int scelta,n, flag;

        do{
            printf("\n\nMENU\n");
            printf("1. Aggiungere un numero \n");
            printf("2. Visualizzare tutti i numeri \n");
            printf("3. Cercare un numero specifico \n");
            printf("4. Ordinare i numeri in ordine crescente \n");
            printf("5. Eliminare un numero scelto \n");
            printf("6. Uscire \n");
            printf("esegui una scelta:");
            scanf("%d", &scelta);

            switch(scelta){
                case 1:
                    printf("numero da inserire:");
                    scanf("%d", &n);
                    num=(int *)realloc(num,(dim+1)*sizeof (int));
                    if (num == NULL){ 
                        printf("errore \n");
                        return 1;
                    }
                    num[dim]=n;
                    dim++;
                    printf("numero aggiunto \n");
                break;

                case 2:
                    if(dim==0)
                        printf("Array vuoto\n");
                    printf("Array attuale:\t");
                    for(int i=0; i<dim; i++) printf("%d\t",num[i]);
                break;

                case 3:
                    flag=0;
                    printf("che numero vuoi cercare?\n");
                    printf("inseriscilo qui:\t");
                    scanf("%d",&n);
                    for(int i=1; i<=dim; i++){
                        if(num[i]==n){
                            printf("il numero %d è in posizione %d\n",n, i); 
                            flag=1; 
                            break;//in caso lo trovasse esce subito dal case
                        }
                    }
                    if(flag==0)
                        printf("il numero non è stato trovato\n");
                break;

                case 4:
                    int temp, i=0;
                    while(flag==0){
                        flag=1;
                        for(int j=0; j<dim-1-i; j++){
                            if(num[j]>num[j+1]){
                                flag=0;
                                temp=num[j];
                                num[j]=num[j+1];
                                num[j+1]=temp;
                            }
                        }
                    }
                        i++;
                    
                    //visualizza
                    if(dim==0)
                        printf("Array vuoto\n");
                    printf("Array attuale:\t");
                    for(int i=0; i<dim; i++) printf("%d\t",num[i]);
    
                break;

                case 5:
                    printf("che numero vuoi eliminare?\n");
                    printf("inseriscilo qui:\n");
                    scanf("%d",&n);
                    flag=-1;
                        for(int i=0; i<dim; i++){
                            if(num[i]==n){
                                flag=i;
                                break;
                            }
                        }
                        if(flag!=-1){//se ha trovato il numero
                            for(int i=flag; i<dim; i++)//sposta i numeri da destra a sinistra
                            num[i]=num[i+1];
                            dim--;
                            num=realloc(num, dim * sizeof(int));//toglie una cella o più dall'array
                            printf("numero eliminato \n");
                        }else{
                            printf("numero non trovato \n");
                        }
                        
                break;

                case 6:
                    printf("programma terminato\n");
                    return 1;
                break;

            }
        }while(scelta!=6);




    }