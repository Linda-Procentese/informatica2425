#include <stdio.h>

void stampaNumeri(int n) {
    printf("%d \t",n);
    while(n>0){
        n--;
        printf("%d \t",n);
    }
}

int main() {
    stampaNumeri(5); // Output atteso: 1 2 3 4 5
    return 0;
}
