#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 4

int main(void) {

    int grille[TAILLE][TAILLE] = {{0}};   // 0 = case vide
    int i, j;

    srand(time(NULL));  // Initialise le générateur aléatoire

    // TODO : placer 2 tuiles de valeur 2 sur deux cases vides distinctes

    // Affichage de la grille
    for(i = 0; i < TAILLE; i++){
        for(j = 0; j < TAILLE; j++){
            printf("%5d", grille[i][j]);
        }
        printf("\n");
    }

    return 0;
}
