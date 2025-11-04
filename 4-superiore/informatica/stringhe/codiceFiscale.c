/*genera un codice fiscale

Il codice fiscale è un codice alfanumerico di 16 caratteri che serve 
per identificare in modo univoco ogni cittadino italiano.
È composto in questo modo:
CCC NNN YYMDD LLLL C
dove:
CCC → prime tre lettere del cognome, formate prendendo le consonanti
 (o le vocali, se le consonanti non bastano);
NNN → prime tre lettere del nome, con una regola simile a quella del
 cognome (ma se ci sono quattro consonanti, si prendono la 1ª, 3ª e 4ª);
YY → ultime due cifre dell’anno di nascita;
M → lettera che rappresenta il mese di nascita
 (A = gennaio, B = febbraio, C = marzo, D = aprile, E = maggio,
  H = giugno, L = luglio, M = agosto, P = settembre, R = ottobre, 
  S = novembre, T = dicembre);
DD → giorno di nascita (per le donne si aggiunge 40 al giorno);
LLLL → codice del comune di nascita (per questo esercizio useremo G186,
 che è il codice del comune di Ostiglia);
C → lettera di controllo calcolata con una formula basata 
sui precedenti 15 caratteri.

Scrivere un programma in linguaggio C che calcoli e visualizzi
 il codice fiscale (senza il carattere di controllo finale) chiedendo 
 all’utente di inserire nome, cognome, data di nascita nel formato
  GG/MM/AAAA, sesso (M o F).
Sarà necessario verificare la correttezza degli input, quindi nome
 e cognome devono essere composti solo da lettere; la data deve essere
  composta solo da numeri (oltre agli eventuali /, si può scegliere se
   far inserire un valore della data alla volta o tutta la data con il 
   separatore /); il sesso può avere solo la lettera M o F.
 Per il controllo di nome, cognome e data, si suggerisce di leggere 
 l’input carattere per carattere usando getchar().*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef char* stringa;

void compatta(stringa buffer,int len){//toglie l'invio inserito dall'utente per evitare che venga letto dall' fgets
    if(len>0 &&buffer[len-1]=='\n'){
        buffer[len-1]='\0';//così quando l'utente inserisce invio termina automaticamente la stringa
        len--;
    }
}
void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n'){}
}


int main(){
    stringa cognome=NULL, nome=NULL, mese=NULL, codiceFiscale=NULL;
    int anno, giorno, lenNome=0, lenCogn=0, lenMese=0, lenCodice=16, j;
    char sesso, buffer[16],c;
    

    //cognome
    printf("inserisci il tuo cognome: ");
    fgets(buffer,sizeof(buffer),stdin);

    lenCogn=strlen(buffer);
    compatta(buffer,lenCogn);
    cognome=(stringa)malloc((lenCogn+1)*sizeof (char));
    strcpy(cognome,buffer);
    clear_buffer();

    //nome
    printf("inserisci il tuo nome: ");
    fgets(buffer,sizeof(buffer),stdin);

    lenNome=strlen(buffer);
    compatta(buffer,lenNome);
    nome=(stringa)malloc((lenNome+1)*sizeof (char));
    strcpy(nome,buffer);
    clear_buffer();

    //anno
    printf("inserisci il tuo anno di nascita: ");
    scanf("%d",&anno);

    //mese
    printf("inserisci il tuo mese di nascita: ");
    fgets(buffer,sizeof(buffer),stdin);
    
    lenMese=strlen(buffer);
    compatta(buffer,lenCogn);
    cognome=(stringa)malloc((lenMese+1)*sizeof (char));
    strcpy(cognome,buffer);
    clear_buffer();

    //giorno
    printf("inserisci il giorno in cui sei nato: ");
    scanf("%d",&giorno);

    //sesso
    printf("inserisci il tuo sesso (m/f): ");
    scanf("\n%c",&sesso);

    //CCC

    //scorriamo il cognome
    for(int i=0;i<lenCogn;i++){
        c=tolower(cognome[i]);
        if(c!='a' || c!='e' || c!='i' || c!='o' || c!='u'){
    
            while(i<=3){
                for(int a=0; a<lenCodice; a++){
                    codiceFiscale[a]=c;
                }
            }
        }
    }

    compatta(buffer,lenCodice);
    codiceFiscale=(stringa)malloc((lenCodice+1)*sizeof (char));
    strcpy(codiceFiscale,buffer);
    clear_buffer();

    free(nome);
    free(cognome);
    free(mese);
}