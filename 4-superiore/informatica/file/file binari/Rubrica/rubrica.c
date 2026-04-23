/*creare una rubrica che gestisca la memorizzazone
 dei contatti e ne visualizzi l'elenco utilizzando un fle binario aggiungere  creare il file rubrica 
 stampa lista contatti
 elimina un contatto in base al nome
 separa il file rubrica in due file in base al sesso*/

 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>


 typedef struct rubrica{
    char nome[30];
    char telefono[15];
    char sesso;
 }contatto;

 void Aggiungi_contatto(){
    FILE *fp=fopen("rubrica.bin","ab");
    
    if(fp==NULL){
        printf("rrore di allocazione");
        return ;
    }

    contatto c;
    printf("\ninserisci il nome: ");
    scanf("%s",c.nome); //se non funziona usa "%[^\n] al posto di "%s"
    getchar();
    printf("inserisci il numero di telefono: ");
    scanf("%s",c.telefono);
    getchar();
    printf("inserisci il sesso: ");
    scanf("%c",&c.sesso);
    getchar();

    fwrite (&c,sizeof(contatto),1,fp);
    fclose(fp);
}


 void Stampa_contatti(){
    FILE *fp=fopen("rubrica.bin","rb");
 
    if(fp==NULL){
        printf("Errore apertura file \n");
        return ;
    }
    contatto c;
    printf("\n ===Rubrica=== \n");
    while(fread(&c, sizeof(contatto),1,fp)){
        printf("Nome:%s, telefono:%s, Sesso:%c\n",c.nome, c.telefono, c.sesso);

    }
    fclose(fp);

}

void Elimina_contatto(){
    FILE *fp=fopen("rubrica.dat","rb");//leggo i dati dal file originale 
    FILE *fp_tmp=fopen("temp.dat","wb");//e li ricopio su un altro file
    char cerca[30];
    contatto c;

    if(fp==NULL){
        printf("errore di allocazione");
        return ;
    }

    if(fp_tmp==NULL){
        printf("errore sul file temporaneo");
        return ;
    }
    printf("inserisci il nome");
    scanf("%[^\n]",cerca);
    getchar();

    while(fread(&c,sizeof(contatto),1,fp)){//si puo lasciare solo fread \ scrivere fread ==1\ scrivere > di 0 SE RESTITUISCE 1 LEGGE UN DATO VALIDO SUL FILE   
        if(strcmp(c.nome,cerca)==0)//se sono uguali
            printf("trovato!    questo elemento verrà eliminato");//l contatto che si vuole eliminare non sarà copiato nel file temporaneo
        else
            fwrite(&c,sizeof(contatto),1,fp_tmp); //quelli che non appartengono alla ricerca devo copiarli

        
    }
    fclose(fp);
    fclose(fp_tmp);

    fp=fopen("temp.dat","rb");
    fp_tmp=fopen("rubrica.dat","wb");

    if(fp==NULL){
        printf("errore di allocazione");
        return ;
    }

    if(fp_tmp==NULL){
        printf("errore sul file temporaneo");
        return ;
    }

    while(fread(&c,sizeof(contatto),1,fp)){
        fwrite(&c,sizeof(contatto),1,fp_tmp);
    }
    fclose(fp);
    fclose(fp_tmp);
}


void Separa_contatti(){
    FILE *fp=fopen("rubrica.dat","rb");
    FILE *fpF=fopen("femmine.dat","ab");//file per le femmine
    FILE *fpM=fopen("maschi.dat","ab");//file per i maschi
    contatto c;

    while(fread(&c,sizeof(contatto),1,fpF)){
        if(c.sesso=='f' || c.sesso=='F'){
            fwrite(&c,sizeof(contatto),1,fpF);
        }
        else if(c.sesso=='m'|| c.sesso=='M'){
            fwrite(&c,sizeof(contatto),1,fpM);
        }
        else
            printf("errore carattere errato. Puoi inserire solo f/m");
    }
    fclose(fpF);
    fclose(fpM);
    fclose(fp);

    fpF=fopen("femmine.dat","rb");
    fpM=fopen("maschi.dat","rb");

    printf("\n===Rubrica Femmine===\n");
    while(fread(&c,sizeof(contatto),1,fpF)){
        printf("Nome:%s, telefono:%s, Sesso:%c\n",c.nome, c.telefono, c.sesso);
    }

    printf("\n===Rubrica Maschi===\n");
    while(fread(&c,sizeof(contatto),1,fpM)){
        printf("Nome:%s, telefono:%s, Sesso:%c\n",c.nome, c.telefono, c.sesso);
    }
    fclose(fpF);
    fclose(fpM);
}

 int main(){
    int scelta;

    do{
        printf("\n\n ===MENù RUBRICA:===\n");
        printf("1.Aggiungi contatto \n");
        printf("2.Visualizza contatii \n");
        printf("3.Elimina un contatto \n");
        printf("4.Separa i contatti in base al sesso \n");
        printf("0.Esci \n");
        printf("Scelta: ");
        scanf("%d",&scelta);

        switch(scelta){
            case 1:
                Aggiungi_contatto();
                break;
            case 2:
                Stampa_contatti();
                break;
            case 3:
                Elimina_contatto();
                break;
            case 4:
                Separa_contatti();
                break;
            case 0:
                printf("esci dal programma \n");
                break;
            
            default:
                printf("scelta non valida \n");
            
        }
    }while(scelta!=0);
 }