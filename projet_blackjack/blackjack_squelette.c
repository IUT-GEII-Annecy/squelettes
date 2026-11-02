int main(void) {
    //Déclaration du jeu de 52 cartes :
    int l_tab_jeu52[52]={7201,7202,7203,7204,7205,7206,7207,7208,7209,7210,7211,7212,7213,
                         8001,8002,8003,8004,8005,8006,8007,8008,8009,8010,8011,8012,8013,
                         8401,8402,8403,8404,8405,8406,8407,8408,8409,8410,8411,8412,8413,
                         6701,6702,6703,6704,6705,6706,6707,6708,6709,6710,6711,6712,6713};
    int iBcl;

    for(iBcl=0;iBcl<52;iBcl++){    //affichage de toutes les cartes pour vérification :
        printf("%c ", l_tab_jeu52[iBcl]/100);
        printf("%i \n", l_tab_jeu52[iBcl]%100);
    }
    return 0;
}
