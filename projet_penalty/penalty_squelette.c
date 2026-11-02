#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    string l_nomEquipe1 = get_string("Nom de l'équipe du joueur 1 : ");
    string l_nomEquipe2 = get_string("Nom de l'équipe du joueur 2 : ");

    int l_tab_tirs1[20];     // Résultat des tirs de l'équipe 1 : 0=manqué, 1=arrêté, 2=réussi
    int l_tab_tirs2[20];     // Idem pour l'équipe 2

    int l_score1 = 0;
    int l_score2 = 0;
    int iBcl = 0;

    srand(time(NULL));    // Initialise le générateur aléatoire. Nécessite #include <time.h>

    char l_tir = get_char("Tir (d/g/m/D/G/M) : ");
    char l_plongeon = get_char("Plongeon (d/g/m) : ");

    return 0;
}
