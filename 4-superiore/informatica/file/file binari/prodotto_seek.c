/*CREATA UNA STRUCT PRODOTTO CON NOME, 
ID E PREZZO MODIFICARE IL PREZZO DI
 UN PRODOTTO DATO IL SUO ID*/

 #include <stdio.h>

 typedef struct{
    int id;
    char nome[50];
    float prezzo;

 }prodotto;

 void Aggiungi_prodotto(const char *filename){
    FILE *fp=fopen(filename,"ab");
    int n;//quantità di prodotti che vuole inserire
    prodotto p;

    if(fp==NULL){
        printf("Errore apertura file \n");
        return ;
    }
    printf("quanti prodotti voi inserire?");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("prodotto %d\n", i+1);
        printf("ID: ");
        scanf("%d",&p.id);
        getchar();
        printf("nome: ");
        scanf("%[^\n]",p.nome);
        getchar();
        printf("prezzo: ");
        scanf("%f",&p.prezzo);

        fwrite(&p, sizeof(prodotto),1,fp);

    }
    fclose(fp);

 }

 void  Stampa_prodotti(const char *filename){
    FILE *fp=fopen(filename,"rb");
    prodotto p;

    if(fp==NULL){
        printf("Errore apertura file \n");
        return ;
    }
    printf("===ELENCO PRODOTTI=== \n");
    while(fread(&p,sizeof(prodotto),1,fp)==1){
        printf("ID: %d - NOME: %s - PREZZO: %.2f",p.id,p.nome,p.prezzo );
    }
    fclose(fp);
 }

 void Cerca_prodotto(const char *filename, int _id){
    FILE *fp=fopen(filename,"rb");
    prodotto p;
    int trovato;

    if(fp==NULL){
        printf("Errore apertura file \n");
        return ;
    }
    while(fread(&p,sizeof(prodotto),1,fp)==1 && !trovato){
        if(p.id==_id){
            printf("\ntrovato nome: %s - prezzo: %f|\n",p.nome,p.prezzo);
            trovato=1;

        }
        if(!trovato)
            printf("\nprodotto non trovato.");
        fclose(fp);
    }
    
 }
void Modifica_prodotto(const char * filename ,int _id,float nP){
    FILE *fp=fopen(filename,"rb+");
    prodotto p;
    int trovato;

    if(fp==NULL){
        printf("Errore apertura file \n");
        return ;
    }
    while(fread(&p,sizeof(prodotto),1,fp)==1){
        if(p.id==_id){
            p.prezzo == nP;

            fseek(fp,-sizeof(prodotto),SEEK_CUR);//torna in dietro di una struct 
            
            fwrite(&p,sizeof(prodotto),1,fp);
        }
    }
    fclose(fp);
}

 int main(){
    const char*file="prodotti.dat";
    int scelta,id;
    float nuovoPrezzo;
    do{
        printf("\n\n ===MENù PRODOTTI:===\n");
        printf("1.Aggiungi prodotto \n");
        printf("2.Visualizza elenco prodotti \n");
        printf("3.Modifica prezzo prodotto \n");
        printf("0.Esci \n");
        printf("Scelta: ");
        scanf("%d",&scelta);

        switch(scelta){
            case 1:
                Aggiungi_prodotto(file);
                break;
            case 2:
                Stampa_prodotti(file);
                break;
            case 3:
                printf("\ninserisci l'ID del prodotto: ");
                scanf("%d",&id);
                getchar();
                Cerca_prodotto(file,id);
                printf("inserisci il nuovo prezzo: ");
                getchar();
                Modifica_prodotto(file,id,nuovoPrezzo);
                break;

            case 0:
                printf("esci dal programma \n");
                break;
            
            default:
                printf("scelta non valida \n");
            
        }
    }while(scelta!=0);
 }