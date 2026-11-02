#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>   // sleep()

#define NB_CASES 16

int main(void) {

    int l_valeurs[NB_CASES];          // valeurs cachées (8 paires)
    int l_trouvee[NB_CASES] = {0};    // 1 si la case appartient à une paire trouvée
    int iBcl;

    srand(time(NULL));  // Initialise le générateur aléatoire

    // Remplissage : 1,1,2,2,...,8,8
    for(iBcl = 0; iBcl < NB_CASES; iBcl++){
        l_valeurs[iBcl] = iBcl / 2 + 1;
    }

    // TODO : mélanger l_valeurs par échanges aléatoires

    // Affichage de la grille cachée (4 x 4)
    for(iBcl = 0; iBcl < NB_CASES; iBcl++){
        if(l_trouvee[iBcl]){
            printf(" %d ", l_valeurs[iBcl]);
        } else {
            printf(" ? ");
        }
        if(iBcl % 4 == 3){
            printf("\n");
        }
    }

    return 0;
}
