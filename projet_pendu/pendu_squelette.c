int main(void)
{
    string mot;
    int i = 0;

    mot = get_string("Entrer le mot \n");
    do{
        printf("%c\n",mot[i]);
        i++;
    }while(mot[i] != 0);
}
