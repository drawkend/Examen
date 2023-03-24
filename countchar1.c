#include <stdio.h>
#include <string.h>

int count_char(char* chaine, char caractere) {
    int i, compteur = 0;
    for (i = 0; i < strlen(chaine); i++) {
        if (chaine[i] == caractere) {
            compteur++;
        }
    }
    return compteur;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage : %s caractere chaine\n", argv[0]);
        return 1;
    }
    char* chaine = argv[1];
    char caractere = argv[2][0];
    int resultat = count_char(chaine, caractere);
    printf("%d\n", resultat);
    return 0;
}
