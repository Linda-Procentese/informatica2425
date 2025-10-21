#include <stdio.h>
#include <stdlib.h>

char s1[20]="ciao";
char s2="ciao";
char s3[5]={'c','i','a','o','\0'};

printf("%s",s1);

scanf("%19s",s1);//19=dim-1=20-1
scanf("%19['^\n']s",s1);//la stringa termina quando o si raggiungono i 19 caratteri o quando l'utente preme invio
