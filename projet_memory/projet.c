#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>   // sleep()

#define NB_CASES 16

int main(void) {

    int valeurs[NB_CASES];          // valeurs cachées (8 paires)
    int trouvees[NB_CASES] = {0};    // 1 si la case appartient à une paire trouvée
    int i;

    srand(time(NULL));  // Initialise le générateur aléatoire

    // Remplissage : 1,1,2,2,...,8,8
    for(i = 0; i < NB_CASES; i++){
        valeurs[i] = i / 2 + 1;
    }

    // TODO : mélanger valeurs par échanges aléatoires

    // Affichage de la grille cachée (4 x 4)
    for(i = 0; i < NB_CASES; i++){
        if(trouvees[i]){
            printf(" %d ", valeurs[i]);
        } else {
            printf(" ? ");
        }
        if(i % 4 == 3){
            printf("\n");
        }
    }

    return 0;
}
