/*creare una rubrica che gestisca la memorizzazone
 dei contatti e ne visualizzi l'elenco*/

 #include <stdio.h>
 typedef struct rubrica{
    char nome[30];
    char telefono[15];
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
    printf("inserisci il numero di telefono: ");
    scanf("%s",c.telefono);


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
        printf("Nome:%s, telefono:%s \n",c.nome, c.telefono);

    }
    fclose(fp);

}

 int main(){
    int scelta;

    do{
        printf("\n\n ===MENù RUBRICA:===\n");
        printf("1.Aggiungi contatto \n");
        printf("2.Visualizza contatii \n");
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
            case 0:
                printf("esci dal programma \n");
                break;
            
            default:
                printf("scelta non valida \n");
            
        }
    }while(scelta!=0);
 }