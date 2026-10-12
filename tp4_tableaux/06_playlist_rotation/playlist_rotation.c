/*---------------------------------------------------------------------------*/
/* Fichier : playlist_rotation.c                                             */
/* Cahier des charges : Fait démarrer une playlist par le morceau favori     */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX_MORCEAUX 100

int main(void){
    int n;
    string morceaux[MAX_MORCEAUX];
    string favori;
    int indice_favori = -1;

    do {
        n = get_int("Entrer le nombre de morceaux (1-100) : ");
    } while (n < 1 || n > MAX_MORCEAUX);

    printf("Entrer les %i morceaux :\n", n);
    for (int i = 0; i < n; i++){
        morceaux[i] = get_string(" ");
    }

    favori = get_string("Par quel morceau commencer : ");
    for (int i = 0; i < n; i++){
        if (strcmp(morceaux[i], favori) == 0){
            indice_favori = i;
            break;
        }
    }

    printf("Merci. Nouvel ordre :\n");
    /* A COMPLETER : boucle d'affichage de la playlist après rotations.
       Elle doit afficher les n morceaux (aucun perdu), en commencant par
       indice_favori et en revenant au debut grace a un modulo, avec
       " ; " entre deux morceaux (mais pas apres le dernier). */
    printf("\n");

    return 0;
}
