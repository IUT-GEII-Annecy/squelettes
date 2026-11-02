int main(void) {
    // 72 = 'H' pour Heart (Coeur), 80 = 'P' pour Pique, 84 pour 'T' Trefle et 67 pour 'C' Carreau
    int jeu_32_cartes[32] = {7201,7207,7208,7209,7210,7211,7212,7213, 8001,8007,8008,8009,8010,8011,8012,8013, 8401,8407,8408,8409,8410,8411,8412,8413, 6701,6707,6708,6709,6710,6711,6712,6713};
    int i;

    for(i=0;i<32;i++){
        printf("%c ", jeu_32_cartes[i]/100);
        printf("%i \n", jeu_32_cartes[i]%100);
    }
    return 0;
}
