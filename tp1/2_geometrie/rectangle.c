#include <cs50.h>
#include <stdio.h>

int main (void){
    float aire;
    float longueur;
    float largeur;

    // Demande la largeur et la longueur à l'utilisateur (à compléter)
    largeur = get_float("Entrer la largeur du rectangle : ");

    // Calcule l'aire (à compléter)

    // Affiche l'aire selon le format attendu
    // Remarque : %.2f affiche un float avec un arrondi 2 chiffres après la virgule
    printf("L'aire du rectangle est de %.2f\n", aire);
    return 0;
}
