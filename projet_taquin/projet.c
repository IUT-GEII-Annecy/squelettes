#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 4

int main(void) {

    int grille[TAILLE][TAILLE] = {{ 1,  2,  3,  4},
                                    { 5,  6,  7,  8},
                                    { 9, 10, 11, 12},
                                    {13, 14, 15,  0}};   // 0 = case vide
    int i, j;

    srand(time(NULL));  // Initialise le générateur aléatoire

    // TODO : retrouver la position de la case vide
    // TODO : mélanger la grille par des déplacements valides aléatoires

    // Affichage de la grille
    for(i = 0; i < TAILLE; i++){
        for(j = 0; j < TAILLE; j++){
            if(grille[i][j] == 0){
                printf("   ");
            } else {
                printf("%3d", grille[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
