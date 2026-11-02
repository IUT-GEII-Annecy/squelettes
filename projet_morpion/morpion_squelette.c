int main(void) {

    int grille[9] = {1,0,0,0,2,0,1,0,2};

    int i = 0, j = 0, joueur = 0, nb_coups = 0;

    for(j = 0 ; j <3 ; j++){
        printf("\n+---+---+---+\n|");
        for(i = 6-3*j ; i<9-3*j;i++){
            printf(" %c |",(grille[i]==1)*'X' + (grille[i]==2)*'O' + (grille[i]==0)*32);
        }
    }
    printf("\n+---+---+---+\n");

    do{
        joueur = (nb_coups%2) + 1 ;
        printf("\n\nJoueur %i joue", joueur);

        // Code commun aux deux joueurs

        nb_coups++;
    }while(1);

    return 0;
}
