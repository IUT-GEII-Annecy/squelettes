/*---------------------------------------------------------------------------*/
/* Fichier : cinema_occupation.c                                             */
/* Cahier des charges : Places libres et taux d'occupation d'une rangée      */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define MAX_SIEGES 100

int main(void){
    int n;
    int rang[MAX_SIEGES];
    int nb_occupes = 0;

    do {
        n = get_int("Entrer le nombre de sieges (1-100) : ");
    } while (n < 1 || n > MAX_SIEGES);

    for (int i = 0; i < n; i++){
        /* A COMPLETER */ = get_int("Le siege %i est-il occupe (0 ou 1) : ", i);
        if (rang[i] == 1){
            nb_occupes++;
        }
    }

    printf("Places libres : ");
    int aucune_libre = 1;
    for (int i = 0; i < n; i++){
        if (/*!!! A compléter !!!*/){
            // A compléter : afficher le numéro du siège libre
            aucune_libre = 0;
        }
    }
    if (aucune_libre){
        printf("Complet");
    }
    printf("\n");

    // A COMPLETER : calculer le taux d'occupation (en pourcentage) et l'afficher avec 2 décimales

    return 0;
}
