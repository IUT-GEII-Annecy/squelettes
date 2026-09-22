/*---------------------------------------------------------------------------*/
/* Fichier : rectangle.c                                                     */
/* Cahier des charges : Calcule l'aire d'un rectangle                        */ 
/*---------------------------------------------------------------------------*/

#include <cs50.h>
#include <stdio.h>

int main (void){
    float aire = 0.;
    float longueur;
    float largeur;

    // 1. Demande la largeur et stoque la réponse dans largeur
    largeur = get_float("Entrer la largeur du rectangle : ");
    
    // 2. Demande la longueur et stoque la réponse dans longueur
    
    
    // 3. Calcule l'aire et stoque le résultat dans aire


    // Affiche l'aire selon le format attendu
    // Remarque : %.2f affiche un float avec un arrondi 2 chiffres après la virgule
    printf("L'aire du rectangle est de %.2f\n", aire);
    return 0;
}
