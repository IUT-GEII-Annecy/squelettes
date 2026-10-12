/*---------------------------------------------------------------------------*/
/* Fichier : web_moving_avg.c                                                */
/* Cahier des charges : Moyenne glissante (fenêtre 3) sur une série de       */
/*                       visites par heure                                   */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define MAX_VISITES 100

int main(void){
    int n;
    int v[MAX_VISITES];
    int out[MAX_VISITES];

    do {
        n = get_int("Entrer le nombre de mesures (1-100) : ");
    } while (n < 1 || n > MAX_VISITES);

    for (int i = 0; i < n; i++){
        v[i] = get_int("Entrer les visites de l'heure %i : ", i + 1);
    }

    /* A COMPLETER : calcul complet de la moyenne glissante dans out[].
       out[0] = v[0] ; out[n-1] = v[n-1] (si n > 1) ; et pour chaque
       indice i tel que 1 <= i <= n-2 : out[i] = (v[i-1]+v[i]+v[i+1]) / 3
       (division entiere). */

    printf("out= ");
    for (int i = 0; i < n; i++){
        printf("%i ", out[i]);
    }
    printf("\n");

    return 0;
}
