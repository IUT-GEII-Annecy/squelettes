int main(void) {

    char rouleaux[3][11] =     {{'L','7','C','B','L','C','L','L','C','L','B'},
                                     {'L','C','7','L','C','L','B','3','L','7','C'},
                                     {'L','B','L','C','L','7','C','L','B','C','L'}};

    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<11;j++){
            printf("%c ",rouleaux[i][j]);
        }
        printf("\n");
    }

    return 0;
}
