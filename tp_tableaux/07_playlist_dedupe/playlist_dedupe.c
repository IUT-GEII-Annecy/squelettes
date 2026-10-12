/*---------------------------------------------------------------------------*/
/* Fichier : playlist_dedupe.c                                               */
/* Cahier des charges : Retire les doublons d'une playlist (ordre conservé)  */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define MAX_IDS 100

int main(void){
    int n;
    int ids[MAX_IDS];
    int out[MAX_IDS];
    int taille_out = 0;

    do {
        n = get_int("Entrer le nombre d'ids (1-100) : ");
    } while (n < 1 || n > MAX_IDS);

    for (int i = 0; i < n; i++){
        ids[i] = get_int("Entrer l'id %i : ", i + 1);
    }

    /* A COMPLETER : boucle(s) qui construisent out[] sans doublons, en
       conservant l'ordre d'apparition des ids[]. Pour chaque ids[i], vous
       devez determiner (par exemple avec une boucle interne qui parcourt
       les taille_out elements deja places dans out[]) s'il a deja ete
       recopie ; si non, l'ajouter a out[] et incrementer taille_out. */

    printf("taille=%i\n", taille_out);
    printf("-> ");
    for (int i = 0; i < taille_out; i++){
        printf("%i", out[i]);
        if (i < taille_out - 1){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
