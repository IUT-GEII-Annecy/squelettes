int main(void) {
    int nombres_disponibles[24] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,25,50,75,100};
    int tirage[6];                //Déclaration du tableau de jeu

    srand(time(NULL)); // Initialise le générateur aléatoire. Nécessite #include <time.h>

    for(int i = 0;i<6;i++){
        tirage[i] = nombres_disponibles[rand()];    //Utilisez % !!!
        printf("Tirage %d = %d\n", i+1, tirage[i]);
    }

    printf("Cible %d \n", rand()%1000);    //Modifier % pour respecter le tirage souhaité

    return 0;
}
