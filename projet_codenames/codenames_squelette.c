#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char plateau[5][5];      // Mot (ou code du mot) affiché sur chaque carte de la grille
    int couleurs_cartes[5][5];      // Couleur cachée de chaque carte : 0=neutre, 1=rouge, 2=bleu, 3=assassin
    bool cartes_revelees[5][5];      // true si la carte a déjà été révélée

    srand(time(NULL));    // Initialise le générateur aléatoire. Nécessite #include <time.h>

    char choix = get_char("Afficher la carte espion ? (o/n) ");

    return 0;
}
