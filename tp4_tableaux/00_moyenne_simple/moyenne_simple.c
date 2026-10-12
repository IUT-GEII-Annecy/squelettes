/*---------------------------------------------------------------------------*/
/* Fichier : moyenne_simple.c                                                */
/* Cahier des charges : Calcule la moyenne de 3 notes (sans tableau)         */
/* Ce programme est donne integralement : lancez-le et observez.            */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

int main(void){
    float note1 = get_float("Entrer la note 1 : ");
    float note2 = get_float("Entrer la note 2 : ");
    float note3 = get_float("Entrer la note 3 : ");

    float moyenne = (note1 + note2 + note3) / 3;
    printf("La moyenne est de %.2f\n", moyenne);

    return 0;
}
