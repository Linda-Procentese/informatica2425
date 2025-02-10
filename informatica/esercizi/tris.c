#include <stdio.h>
void stampagriglia (char _c1, char _c2, char _c3, char _c4, char _c5, char _c6, char _c7, char _c8, char _c9);
void sceltacasella(char _c1, char _c2, char _c3, char _c4, char _c5, char _c6, char _c7, char _c8, char _c9);

int main(){
    int scelta, cnt=0;
    char c1,c2,c3,c4,c5,c6,c7,c8,c9;
    

    
    
}
void stampagriglia (char _c1, char _c2, char _c3, char _c4, char _c5, char _c6, char _c7, char _c8, char _c9)
{
    printf("%c|%c|%c\n",_c1,_c2,_c3);
    printf("________\n");
    printf("%c|%c|%c\n",_c4,_c5,_c6);
    printf("________\n");
    printf("%c|%c|%c\n",_c7,_c8,_c9);}

void sceltacasella(char _c1, char _c2, char _c3, char _c4, char _c5, char _c6, char _c7, char _c8, char _c9){
    while(c1==0 || c2==0 || c3==0 || c4==0 || c5==0 || c6==0 || c7==0 || c8==0 || c9==0){
        cnt++;
        if(cnt%2==0){
            printf("il tuo simbolo è la x scegli una cella");
            switch (scelta)
                {
                case 1:
                    if(c1==0)
                    c1='x';
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 2:
                    if(c2==0)
                    c2='x';
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 3:
                    if(c3==0)
                    c3='x';
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 4:
                    if(c4==0)
                    c4='x';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 5:
                    if(c5==0)
                    c5='x';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 6:
                    if(c6==0)
                    c6='x';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 7:
                    if(c7==0)
                    c7='x';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 8:
                    if(c8==0)
                    c8='x';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 9:
                    if(c9==0)
                    c9='x';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                
            default:
            printf('errore');
                break;
            }
        }
        else{
            printf('il tuo simbolo è la o scegli una cella');
            switch (scelta)
                {
                case 1:
                    if(c1==0)
                    c1='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 2:
                    if(c2==0)
                    c2='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 3:
                    if(c3==0)
                    c3='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 4:
                    if(c4==0)
                    c4='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 5:
                    if(c5==0)
                    c5='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 6:
                    if(c6==0)
                    c6='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 7:
                    if(c7==0)
                    c7='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 8:
                    if(c8==0)
                    c8='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                case 9:
                    if(c9==0)
                    c9='o';
                    else 
                    printf('scegli un'altra cella, è gia occupata');
                    break;
                
            default:
            printf('errore');
                break;
            }
        }

    }
}