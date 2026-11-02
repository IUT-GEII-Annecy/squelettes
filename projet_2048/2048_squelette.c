#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 4

int main(void) {

    int l_grille[TAILLE][TAILLE] = {{0}};   // 0 = case vide
    int iBclL, iBclC;

    srand(time(NULL));  // Initialise le générateur aléatoire

    // TODO : placer 2 tuiles de valeur 2 sur deux cases vides distinctes

    // Affichage de la grille
    for(iBclL = 0; iBclL < TAILLE; iBclL++){
        for(iBclC = 0; iBclC < TAILLE; iBclC++){
            printf("%5d", l_grille[iBclL][iBclC]);
        }
        printf("\n");
    }

    return 0;
}
