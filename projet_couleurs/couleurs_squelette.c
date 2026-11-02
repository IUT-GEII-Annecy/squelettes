void afficher_carre_couleur(int code_couleur);

//prototype de la fonction afficher_carre_couleur()
int main(void) {

    srand(time(NULL));  // Initialise le générateur aléatoire. Nécessite #include <time.h>
    printf("\n");

    //Boucle qui affiche 10 carrés de couleurs aléatoires 
    for(int i = 0;i<10;i++){
        afficher_carre_couleur(rand()%4);
        printf(" ");

    }

    printf("\n");
    sleep(5); // Attente de 5 secondes bloquante
    system("clear"); // Efface le terminal
    return 0;

}

//fonction afficher_carre_couleur() qui affiche un carré. Le paramètre d'entrée indique le code de  la couleur du carré souhaitée. Pas de retour.
void afficher_carre_couleur(int code_couleur){

    switch(code_couleur){

        case 0 :
//O pour afficher un carré noir
            printf("\033[40m  \033[0m");
        break;

        case 1 :
//1 pour afficher un carré bleu
            printf("\033[44m  \033[0m");

        break;

        case 2 : 
//2 pour afficher un carré vert
            printf("\033[42m  \033[0m");
        break;

        case 3 :
//3 pour afficher un carré rouge
            printf("\033[41m  \033[0m");
        break;

    }

}
