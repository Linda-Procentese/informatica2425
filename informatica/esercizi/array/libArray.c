#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void stampaVettore(int vettore[], int dim, char sep){
    for(int i=0; i<dim; i++){
            printf("%d%c", vettore[i], sep);
                }
                }
                void riempiVettore(int vettore[], int dim){
                    for(int i=0; i<dim; i++){
                            printf("inserici l'elemento in posizione di %d: ", i);
                                    scanf("%d", &vettore[i]);
                                        }
                                        }
                                        void riempiVettoreCasuale(int vettore[], int dim, int minimo, int massimo){
                                            srand(time(NULL));
                                                for(int i=0; i<dim; i++){
                                                        vettore[i]=rand()%(massimo-minimo+1)+minimo;
                                                            }
                                                            }