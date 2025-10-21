
typedef char* string;
/**
 * funzione che toglie il \n inserito dall'utente per terminare automaticamente la stringa (sostituendolo con il carattere terminante \0).
 * @param char* buffer di caratteri
 * @param int lunghezza della stringa
 */
void compatta(string buffer,int len);

/**
 * funzione che conta quanti caratteri sono vocali (controlliamo sia i caratteri maiuscoli sia quelli minuscoli usando la funzione tolower (permette di trasformare tutti i caratteri maiuscoli in minuscoli)).
 * @param char* stringa di caratteri
 */
int conteggio(string frase);

/**
 * funzione che toglie il carattere che sceglie l'utente dalla stringa.
 * @param char* stringa di caratteri
 * @param char carattere che contiene il carattere da eliminare
 */
void senzaSpazi(string frase, char carattere);