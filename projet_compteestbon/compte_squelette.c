int main(void) {
    int l_tab_nombres[24] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,25,50,75,100};
    int l_tab_jeu[6];                //Déclaration du tableau de jeu

    srand(time(NULL)); // Initialise le générateur aléatoire. Nécessite #include <time.h>

    for(int iBcl = 0;iBcl<6;iBcl++){
        l_tab_jeu[iBcl] = l_tab_nombres[rand()];    //Utilisez % !!!
        printf("Tirage %d = %d\n", iBcl+1, l_tab_jeu[iBcl]);
    }

    printf("Cible %d \n", rand()%1000);    //Modifier % pour respecter le tirage souhaité

    return 0;
}
