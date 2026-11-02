void afficher_carre_couleur(int code_couleur);

int main(void) {

    int i;
    printf("\n");

    for(i = 0;i<4;i++){
        afficher_carre_couleur(i);
        printf(" ");
    }
    return 0;
}

void afficher_carre_couleur(int code_couleur){

    switch(code_couleur){

        case 0 :
            printf("\033[40m  \033[0m");
        break;

        case 1 :
            printf("\033[44m  \033[0m");
        break;

        case 2 :
            printf("\033[42m  \033[0m");
        break;

        case 3 :
            printf("\033[41m  \033[0m");
        break;
    }
}
