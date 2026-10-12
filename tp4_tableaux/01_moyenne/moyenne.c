/*---------------------------------------------------------------------------*/
/* Fichier : moyenne.c                                                       */
/* Cahier des charges : Calcule la moyenne de 10 notes via une fonction      */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define NB_NOTES 10

float calculer_moyenne(float notes[], int taille){
    float somme = 0;
    for (int i = 0; i < taille; i++){
        somme += notes[i];
    }
    return (int) somme / taille;
}

int main(void){
    float notes[NB_NOTES];

    for (int i = 0; i < NB_NOTES; i++){
        notes[i] = get_float("Entrer la note %i : ", i + 1);
    }

    float moyenne = calculer_moyenne(notes, NB_NOTES);

    printf("La moyenne est de %.2f\n", moyenne);

    return 0;
}
