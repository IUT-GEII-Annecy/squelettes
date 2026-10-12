/*---------------------------------------------------------------------------*/
/* Fichier : tarifs_selection_sort.c                                         */
/* Cahier des charges : Trie des tarifs (en centimes) par sélection          */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define MAX_TARIFS 100

int main(void){
    int n;
    int p[MAX_TARIFS];
    int nb_echanges = 0;

    do {
        n = get_int("Entrer le nombre de tarifs (1-100) : ");
    } while (n < 1 || n > MAX_TARIFS);

    for (int i = 0; i < n; i++){
        p[i] = get_int("Entrer le tarif %i (en centimes) : ", i + 1);
    }

    /* A COMPLETER : tri par selection croissant du tableau p[] (implementation
       personnelle, sans qsort). Principe : pour chaque position i de 0 a
       n-2, chercher l'indice du minimum parmi p[i..n-1], puis echanger
       p[i] avec ce minimum s'il n'est pas deja en place. Incrementer
       nb_echanges a chaque echange reellement effectue. */

    printf("sorted= ");
    for (int i = 0; i < n; i++){
        printf("%i ", p[i]);
    }
    printf("\n");
    printf("swaps= %i\n", nb_echanges);

    return 0;
}
