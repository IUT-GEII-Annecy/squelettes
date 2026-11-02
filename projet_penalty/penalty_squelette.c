#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    string nom_equipe_1 = get_string("Nom de l'équipe du joueur 1 : ");
    string nom_equipe_2 = get_string("Nom de l'équipe du joueur 2 : ");

    int tirs_equipe_1[20];     // Résultat des tirs de l'équipe 1 : 0=manqué, 1=arrêté, 2=réussi
    int tirs_equipe_2[20];     // Idem pour l'équipe 2

    int score_equipe_1 = 0;
    int score_equipe_2 = 0;
    int i = 0;

    srand(time(NULL));    // Initialise le générateur aléatoire. Nécessite #include <time.h>

    char tir = get_char("Tir (d/g/m/D/G/M) : ");
    char plongeon = get_char("Plongeon (d/g/m) : ");

    return 0;
}
