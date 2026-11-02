#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 4

int main(void) {

    int l_grille[TAILLE][TAILLE] = {{ 1,  2,  3,  4},
                                    { 5,  6,  7,  8},
                                    { 9, 10, 11, 12},
                                    {13, 14, 15,  0}};   // 0 = case vide
    int iBclL, iBclC;

    srand(time(NULL));  // Initialise le générateur aléatoire

    // TODO : retrouver la position de la case vide
    // TODO : mélanger la grille par des déplacements valides aléatoires

    // Affichage de la grille
    for(iBclL = 0; iBclL < TAILLE; iBclL++){
        for(iBclC = 0; iBclC < TAILLE; iBclC++){
            if(l_grille[iBclL][iBclC] == 0){
                printf("   ");
            } else {
                printf("%3d", l_grille[iBclL][iBclC]);
            }
        }
        printf("\n");
    }

    return 0;
}
