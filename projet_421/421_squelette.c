int main(void) {
    int l_tab_joueurs_points[2];     //Déclaration du tableau de point des 2 joueurs
    int l_tab_jeu[6];                //Déclaration du tableau de jeu. Les 3 chiffres du tirage du joueur 1 seront rangés dans les 3 premières cases de ce tableau, les 3 chiffres du joueur 2 seront rangés dans les 3 suivantes.

    bool l_joueur = 0;
    int iBcl = 0 ;
    char l_lettre = 0;

    srand(time(NULL));    // Initialise le générateur aléatoire. Nécessite #include <time.h>

    do{
        printf("Joueur %d joue :\n", l_joueur);

        //Boucle for qui lance 3 dés et mémorise dans le tableau de jeu et affiche :
        for(iBcl = 0;iBcl<3;iBcl++){
            l_tab_jeu[l_joueur * 3+iBcl] = rand();    //Utilisez % !!!
            printf("Dé %d de joueur %d = %d\n", iBcl+1, l_joueur, l_tab_jeu[l_joueur*3+iBcl]);
        }
        l_lettre = get_char("Appuyez sur une touche pour passer au joueur suivant. q pour sortir.\n");
        l_joueur = !l_joueur;       //Pour passer au 2ème joueur
    }while(l_lettre != 'q');
    return 0;
}
