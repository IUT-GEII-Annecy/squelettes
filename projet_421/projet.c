int main(void) {
    int scores_joueurs[2];     //Déclaration du tableau de point des 2 joueurs
    int valeurs_des[6];                //Déclaration du tableau de jeu. Les 3 chiffres du tirage du joueur 1 seront rangés dans les 3 premières cases de ce tableau, les 3 chiffres du joueur 2 seront rangés dans les 3 suivantes.

    bool joueur = 0;
    int i = 0 ;
    char touche = 0;

    srand(time(NULL));    // Initialise le générateur aléatoire. Nécessite #include <time.h>

    do{
        printf("Joueur %d joue :\n", joueur);

        //Boucle for qui lance 3 dés et mémorise dans le tableau de jeu et affiche :
        for(i = 0;i<3;i++){
            valeurs_des[joueur * 3+i] = rand();    //Utilisez % !!!
            printf("Dé %d de joueur %d = %d\n", i+1, joueur, valeurs_des[joueur*3+i]);
        }
        touche = get_char("Appuyez sur une touche pour passer au joueur suivant. q pour sortir.\n");
        joueur = !joueur;       //Pour passer au 2ème joueur
    }while(touche != 'q');
    return 0;
}
