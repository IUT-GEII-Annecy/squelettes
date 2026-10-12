/*---------------------------------------------------------------------------*/
/* Fichier : compte_occurrences.c                                            */
/* Cahier des charges : Compter le nombre d'occurrences d'une valeur         */
/*                      dans un tableau d'entiers.                          */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define MAX_VALEURS 100

int main(void){
    int n;
    int valeurs[MAX_VALEURS];

    do {
        n = get_int("Entrer le nombre de valeurs (1-100) : ");
    } while (n < 1 || n > MAX_VALEURS);

    for (int i = 0; i < n; i++){
        valeurs[i] = get_int("Valeur %i : ", i);
    }

    int cible = get_int("Valeur a rechercher : ");

    // A vous d'ecrire la suite : compter le nombre d'occurrences de
    // "cible" dans "valeurs", puis afficher ce nombre.

    return 0;
}
