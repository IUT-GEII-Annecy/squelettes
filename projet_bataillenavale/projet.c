int main(void){
    int grille_mer[6][6]; //Déclaration de la mer
    int i, j;

//Affichage de la première ligne de la grille (numéro de colonne) :

printf(" ");

for(j=0;j<6;j++){
    printf("%i ",j+1);
}

//Initialisation et affichage de la grille :

printf("\n");
for(j=0;j<6;j++){ //Boucle des abscisses
    //Affichage de la lettre de la ligne :
    printf("%c ", j+65);

    for(i=0;i<6;i++){ //Boucle des ordonnées
    grille_mer[j][i] = 0; //Initialisation à 0
    printf("%i ",grille_mer[j][i]); //Affichage
    }

    printf("\n");
}

return 0;
}