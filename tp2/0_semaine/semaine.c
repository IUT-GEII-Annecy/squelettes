/* ------------------------------------------------------------------------- */
/*           Switch - Case -- Un exemple Simple                              */
/*     Compléter le code suivant pour qu'il affiche le jour de la semaine    */
/*          en fonction du numéro du jour (1 pour Lundi, 2 pour Mardi, ...)  */
/* ------------------------------------------------------------------------- */

#include <cs50.h>
#include <stdio.h>
int main() {
    int jour; // Variable pour stocker le numéro du jour
    jour = get_int("Entrez un numéro de jour (1-7) : ");

    switch (jour) {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            // Compléter pour les autres jours
        default:
            printf("Numéro de jour invalide. Veuillez entrer un nombre entre 1 et 7.\n");
    }
}
