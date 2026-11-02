int main(void) {

    int grille[6][6];
    int i = 0, j = 0, joueur = 0, nb_coups = 0;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            grille[i][j] = 0;
            printf("%i ",grille[i][j]);
        }
        printf("\n");
    }

    do{
        joueur = (nb_coups%2) + 1 ;
        printf("\n\nJoueur %i joue", joueur);
        nb_coups++;
    }while(1);

    return 0;
}
