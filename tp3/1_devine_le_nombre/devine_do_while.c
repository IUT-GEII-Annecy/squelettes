#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int vies;
    int nombre_mystere;
    int proposition;
    int niveau;
    // A COMPLETER : Demander le niveau de difficulté et initialiser le nombre de vies
    // L’utilisation d’un switch case parait appropriée ici.
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));
    nombre_mystere = rand() % 100 + 1; // Nombre entre 1 et 100
    // A COMPLETER : Boucle principale du jeu
    return 0;
}