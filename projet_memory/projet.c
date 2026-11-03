#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    char lettres[16];
    int trouvees[16] = {0};

    int i = 0, j = 0;

    srand(time(NULL));

    // Affichage de la grille de jeu

    printf("+----+----+----+----+\n");
    for(j = 0 ; j < 4 ; j++){
        for(i = 0 ; i < 4 ; i++){
            printf("| ?  ");
        }
        printf("|\n");
        for(i = 0 ; i < 4 ; i++){
            printf("| %2d ", 4*j + i + 1);
        }
        printf("|\n+----+----+----+----+\n");
    }

    return 0;
}
