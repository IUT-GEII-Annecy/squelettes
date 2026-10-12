/*---------------------------------------------------------------------------*/
/* Fichier : minimum_tableau.c                                               */
/* Cahier des charges : Trouver la plus petite valeur d'un tableau          */
/*                      d'entiers, et son indice.                           */
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

    // A vous d'ecrire la suite : trouver la plus petite valeur du tableau
    // "valeurs" ainsi que l'indice (0..n-1) auquel elle se trouve, puis
    // afficher ces deux informations. S'il y a plusieurs occurrences du
    // minimum, on gardera l'indice de la premiere rencontree.

    return 0;
}
