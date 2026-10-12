/*---------------------------------------------------------------------------*/
/* Fichier : filtre_notes.c                                                  */
/* Cahier des charges : Affiche les notes au-dessus d'un seuil               */
/*---------------------------------------------------------------------------*/
#include <cs50.h>
#include <stdio.h>

#define MAX_NOTES 50

int main(void){
    int n;
    float notes[MAX_NOTES];
    float seuil;
    int compteur = 0;

    do {
        n = get_int("Entrer le nombre de notes (1-50) : ");
    } while (n < 1 || n > MAX_NOTES);

    for (int i = 0; i < n; i++){
        // A compléter : demander la note i et la stocker dans le tableau notes
        // Aidez-vous de l'exemple de la moyenne.c pour la saisie des notes
    }

    seuil = get_float("Entrer le seuil : ");

    printf("Notes au-dessus du seuil : ");
    for (int i = 0; i <= n; i++){
        if (/*!!! A compléter !!!*/){
            // A compléter : afficher la note i
            compteur++;
        }
    }
    if (compteur == 0){
        printf("Aucune");
    }
    printf("\n");

    printf("Nombre de notes affichees : %i\n", compteur);

    return 0;
}
