/*---------------------------------------------------------------------------*/
/* Fichier : catalogue_bsearch.c                                             */
/* Cahier des charges : Recherche dichotomique d'un ID dans un catalogue     */
/*                       trié                                                */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define MAX_IDS 100

int main(void){
    int n;
    int id[MAX_IDS];
    int x;

    do {
        n = get_int("Entrer le nombre d'ids (1-100) : ");
    } while (n < 1 || n > MAX_IDS);

    for (int i = 0; i < n; i++){
        id[i] = get_int("Entrer l'id %i (trie croissant) : ", i + 1);
    }

    x = get_int("Entrer l'id recherche : ");

    /* A COMPLETER : recherche dichotomique (binaire) de x dans id[0..n-1],
       qui est trie croissant. Utiliser deux bornes low et high (initialisees
       respectivement a 0 et n-1) et une variable resultat (initialisee a
       -1), dans une boucle while : calculer mid = (low+high)/2, comparer
       id[mid] a x, et reduire la zone de recherche (via low ou high) en
       consequence jusqu'a trouver x ou epuiser la zone. */
    int resultat;

    printf("%i\n", resultat);

    return 0;
}
