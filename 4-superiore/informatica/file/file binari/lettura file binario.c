/*lettura file binario*/
#include <stdio.h>
int main(){
    FILE *fp =fopen ("numeri.bin","rb");
    int numeri[3], i;

    if(fp==NULL){
        printf("rrore di allocazione");
        return 1;
    }

    fread(numeri, sizeof(int), 3, fp);

    for(int i=0; i<3;i++){
        printf("%d \n",numeri[i]);

    }
    fclose(fp);
}    