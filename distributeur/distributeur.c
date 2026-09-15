/* ------------------------------------------------------------------------- */
/*                  distributeur.c : Un distributeur de boissons             */
/*     Exercice de synthese TP1 + TP2                                        */
/*     Niveau 1 : switch case obligatoire pour le choix de la boisson        */
/*     Niveau 2 : ajouter la gestion des erreurs avec des if                 */
/* ------------------------------------------------------------------------- */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string nom = get_string("Entrez votre nom :\n");
    printf("Bonjour, %s !\n", nom);

    printf("1 - Cafe (0.80 euros)\n");
    printf("2 - The (0.70 euros)\n");
    printf("3 - Chocolat (1.00 euros)\n");
    printf("4 - Eau (0.50 euros)\n");

    int choix = get_int("Entrez le numero de la boisson :\n");
    float montant = get_float("Entrez le montant insere (en euros) :\n");

    // TODO Niveau 1 : completer le prix et le nom de chaque boisson grace a un switch case
    float prix;
    string boisson;
    switch (choix)
    {
        case 1:
            prix = 0.80;
            boisson = "cafe";
            break;
        // TODO : cas 2 (the), 3 (chocolat), 4 (eau)
    }

    // TODO Niveau 2 : ajouter ici la gestion des erreurs avec des if
    //   - si choix n'est pas compris entre 1 et 4 : "ERREUR : Boisson invalide"
    //   - si montant est strictement inferieur a prix : "ERREUR : Montant insuffisant"

    printf("Voici votre %s.\n", boisson);
    printf("Monnaie rendue : %.2f euros\n", montant - prix);
}
