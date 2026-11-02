#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char l_tab_plateau[5][5];      // Mot (ou code du mot) affiché sur chaque carte de la grille
    int l_tab_couleurs[5][5];      // Couleur cachée de chaque carte : 0=neutre, 1=rouge, 2=bleu, 3=assassin
    bool l_tab_revelee[5][5];      // true si la carte a déjà été révélée

    srand(time(NULL));    // Initialise le générateur aléatoire. Nécessite #include <time.h>

    char l_choix = get_char("Afficher la carte espion ? (o/n) ");

    return 0;
}
