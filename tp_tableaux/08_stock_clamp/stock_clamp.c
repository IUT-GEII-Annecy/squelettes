/*---------------------------------------------------------------------------*/
/* Fichier : stock_clamp.c                                                   */
/* Cahier des charges : Borne un tableau de quantités entre minQ et maxQ     */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define MAX_PARTICIPANTS 100

int main(void){
    int nombre_participants;
    int qte[MAX_PARTICIPANTS];
    int minQ, maxQ;

    do {
        nombre_participants = get_int("Entrer le nombre de participants (1-100) : ");
    } while (nombre_participants < 1 || nombre_participants > MAX_PARTICIPANTS);

    for (int i = 0; i < nombre_participants; i++){
        qte[i] = get_int("Nombre d'invites souhaites par le participant %i : ", i + 1);
    }

    do {
        minQ = get_int("Entrer le minimum minQ : ");
        maxQ = get_int("Entrer le maximum maxQ : ");
    } while (minQ > maxQ);

    /* A COMPLETER : boucle de bornage (clamp) du tableau qte[].
       Pour chaque element : s'il est strictement inferieur a minQ, le
       remplacer par minQ ; s'il est strictement superieur a maxQ, le
       remplacer par maxQ ; sinon le laisser inchange. */

    printf("Tableau corrige : ");
    for (int i = 0; i < nombre_participants; i++){
        printf("%i ", qte[i]);
    }
    printf("\n");

    return 0;
}
