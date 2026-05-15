#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studente {
    char nome[20];
    char cognome[20];
    int matricola;
    char classe[2];
    char indirizzoScolastico[20];
} studente;

void inserisciUtente() {
    FILE *fpI = fopen("informatici.dat", "ab");
    FILE *fpM = fopen("meccatronici.dat", "ab");
    const char* indirInf = "informatico";
    const char* indirMec = "meccatronico";
    studente s;

    if (fpI == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpM == NULL) {
        printf("errore di allocazione");
        exit(1);
    }

    printf("\n===INSERISCI 1 STUDENTE===");
    printf("\ninserisci il nome dello studente: ");
    scanf("%[^\n]", s.nome);
    getchar();
    printf("\ninserisci il cognome dello studente: ");
    scanf("%[^\n]", s.cognome);
    getchar();
    printf("\ninserisci la matricola dello studente: ");
    scanf("%d", &s.matricola);
    printf("\ninserisci la classe dello studente: ");
    scanf("%[^\n]", s.classe);
    getchar();
    printf("\ninserisci l'indirizzo scolastico dello studente (scrivilo tutto minuscolo): ");
    scanf("%[^\n]", s.indirizzoScolastico);
    getchar();

    if (!strcmp(s.indirizzoScolastico, indirInf)) {
        fwrite(&s, sizeof(studente), 1, fpI);
        printf("\nstudente inserito nella sezione informatica");
        printf("====================================================");
    }
    if (!strcmp(s.indirizzoScolastico, indirMec)) {
        fwrite(&s, sizeof(studente), 1, fpM);
        printf("\nstudente inserito nella sezione Meccatronica");
        printf("====================================================");
    }

    if (!strcmp(s.indirizzoScolastico, indirInf)) {
        printf("===SEZIONE INFORMATICA===\n");
        fread(&s, sizeof(studente), 1, fpI);
        printf("nome: %s, cognome: %s, matricola: %d, classe: %s, indirizzo scolastico: %s \n", s.nome, s.cognome, s.matricola, s.classe, s.indirizzoScolastico);
        printf("====================================================");
    }
    if (!strcmp(s.indirizzoScolastico, indirMec)) {
        printf("===SEZIONE MECCATRONICA===\n");
        fread(&s, sizeof(studente), 1, fpM);
        printf("nome: %s, cognome: %s, matricola: %d, classe: %s, indirizzo scolastico: %s \n", s.nome, s.cognome, s.matricola, s.classe, s.indirizzoScolastico);
        printf("====================================================");
    }

    fclose(fpI);
    fclose(fpM);
}

void cambiaIndirizzo() {
    FILE *fpI = fopen("informatici.dat", "r+b");
    FILE *fpM = fopen("meccatronici.dat", "r+b");
    FILE *fpTmpI = fopen("tempInf.dat", "r+b");
    FILE *fpTmpM = fopen("tempMec.dat", "r+b");
    studente s;
    const char* indirInf = "informatico";
    const char* indirMec = "meccatronico";
    int trovato = 0;
    int _matricola = 0;
    char _indirizzo[20];

    if (fpI == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpM == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpTmpI == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpTmpM == NULL) {
        printf("errore di allocazione");
        exit(1);
    }

    printf("inserisci la matricola dello studente che vuoi cercare: ");
    scanf("%d", &_matricola);
    printf("inserisci anche l'indirizzo scolastico dello studente che vuoi cercare: ");
    scanf("%s", _indirizzo);

    if (!strcmp(_indirizzo, indirInf)) {
        while (fread(&s, sizeof(studente), 1, fpI) == 1 && !trovato) {
            if (_matricola == s.matricola) {
                printf("elemento trovato!\n");
                trovato = 1;
                strcpy(s.indirizzoScolastico, indirMec);
                fwrite(&s, sizeof(studente), 1, fpM);
                while (fread(&s, sizeof(studente), 1, fpI)) {
                    if (_matricola == s.matricola) {
                        printf("elemento trovato!\n");
                    } else {
                        fwrite(&s, sizeof(studente), 1, fpTmpI);
                    }
                }
                while (fread(&s, sizeof(studente), 1, fpTmpI)) {
                    fwrite(&s, sizeof(studente), 1, fpI);
                }
                printf("l'indirizzo è stato modificato a : meccatronico");
            }
        }
        if (!trovato) {
            printf("studente non trovato\n");
        }
    }

    fclose(fpI);
    fclose(fpM);
    fclose(fpTmpI);
    fclose(fpTmpM);

    fpI = fopen("informatici.dat", "r+b");
    fpM = fopen("meccatronici.dat", "r+b");
    fpTmpI = fopen("tempInf.dat", "r+b");
    fpTmpM = fopen("tempMec.dat", "r+b");

    if (fpI == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpM == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpTmpI == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpTmpM == NULL) {
        printf("errore di allocazione");
        exit(1);
    }

    if (!strcmp(_indirizzo, indirMec)) {
        while (fread(&s, sizeof(studente), 1, fpM) == 1 && !trovato) {
            if (_matricola == s.matricola) {
                printf("elemento trovato!\n");
                trovato = 1;
                strcpy(s.indirizzoScolastico, indirInf);
                fwrite(&s, sizeof(studente), 1, fpI);
                while (fread(&s, sizeof(studente), 1, fpM)) {
                    if (_matricola == s.matricola) {
                        printf("elemento trovato!\n");
                    } else {
                        fwrite(&s, sizeof(studente), 1, fpTmpM);
                    }
                }
                while (fread(&s, sizeof(studente), 1, fpTmpM)) {
                    fwrite(&s, sizeof(studente), 1, fpM);
                }
                printf("l'indirizzo è stato modificato a : informatico");
            }
        }
        if (!trovato) {
            printf("studente non trovato\n");
        }
    }

    fclose(fpI);
    fclose(fpM);
    fclose(fpTmpI);
    fclose(fpTmpM);
}

void creaUnicoFile() {
    FILE *fpI = fopen("informatici.dat", "rb");
    FILE *fpM = fopen("meccatronici.dat", "rb");
    FILE *fpU = fopen("Unico.dat", "wb");
    studente s;

    if (fpI == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpM == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpU == NULL) {
        printf("errore di allocazione");
        exit(1);
    }

    while (fread(&s, sizeof(studente), 1, fpI)) {
        fwrite(&s, sizeof(studente), 1, fpU);
    }
    while (fread(&s, sizeof(studente), 1, fpM)) {
        fwrite(&s, sizeof(studente), 1, fpU);
    }

    fclose(fpI);
    fclose(fpM);
    fclose(fpU);

    //stampo il file unico

    fpU = fopen("Unico.dat", "rb");

    if (fpU == NULL) {
        printf("errore di allocazione");
        exit(1);
    }

    printf("===ELENCO COMPLETO STUDENTI===\n");
    while (fread(&s, sizeof(studente), 1, fpU)) {
        printf("nome: %s, cognome: %s, matricola: %d, classe: %s, indirizzo scolastico: %s \n", s.nome, s.cognome, s.matricola, s.classe, s.indirizzoScolastico);
        printf("====================================================");
    }

    fclose(fpU);
}

void stampaStudentiSeparati() {
    FILE *fpI = fopen("informatici.dat", "rb");
    FILE *fpM = fopen("meccatronici.dat", "rb");
    studente s;
    const char* indirInf = "informatico";
    const char* indirMec = "meccatronico";

    if (fpI == NULL) {
        printf("errore di allocazione");
        exit(1);
    }
    if (fpM == NULL) {
        printf("errore di allocazione");
        exit(1);
    }

    if (!strcmp(s.indirizzoScolastico, indirInf)) {
        printf("===SEZIONE INFORMATICA===\n");
        while (fread(&s, sizeof(studente), 1, fpI)) {
            printf("nome: %s, cognome: %s, matricola: %d, classe: %s, indirizzo scolastico: %s \n", s.nome, s.cognome, s.matricola, s.classe, s.indirizzoScolastico);
            printf("====================================================");
        }
    }

    if (!strcmp(s.indirizzoScolastico, indirMec)) {
        printf("===SEZIONE MECCATRONICA===\n");
        while (fread(&s, sizeof(studente), 1, fpM)) {
            printf("nome: %s, cognome: %s, matricola: %d, classe: %s, indirizzo scolastico: %s \n", s.nome, s.cognome, s.matricola, s.classe, s.indirizzoScolastico);
            printf("====================================================");
        }
    }

    fclose(fpI);
    fclose(fpM);
}

int main() {
    int scelta;

    do {
        printf("\n===MENù AZIONI===\n");
        printf("1)inserisci uno studente\n");
        printf("2)cambia indirizzo in base alla matricola e indirizzo scolastico (informatico/meccatronico)\n");
        printf("3)creare un unico file con tutti gli studenti dentro\n");
        printf("4)stampa studenti\n");
        printf("0)esci\n");
        printf("SCEGLI: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                inserisciUtente();
                break;
            case 2:
                cambiaIndirizzo();
                break;
            case 3:
                creaUnicoFile();
                break;
            case 4:
                stampaStudentiSeparati();
                break;
            case 0:
                printf("uscita dal programma\n");
                break;
            default:
                printf("Scelta non valida\n");
        }
    } while (scelta != 0);

    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            			