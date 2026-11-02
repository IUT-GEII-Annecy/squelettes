int main(void) {
    char sequence_correcte[50]; // Déclaration du tableau de jeu
    char saisie_joueur[50];     // Déclaration du tableau du joueur pour la saisie
    int nb_coups = 0, joueur = 0, i = 0;

    srand(time(NULL)); // Initialise le générateur aléatoire. Nécessite #include <time.h>

    // On impose une seule boucle pour les 2 joueurs (même code) :
    do {
        printf("Joueur %d joue\n", joueur);

        sequence_correcte[nb_coups] = get_char("Quelle lettre ?");

        printf("Le tableau est : \n");
        for (i = 0; i <= nb_coups; i++) {
            printf("%c ", sequence_correcte[i]);
        }
        printf("\n\n");

        joueur = !joueur; // Pour passer au 2ème joueur
        nb_coups++;

    } while (1); // Boucle infinie

    return 0;
}
