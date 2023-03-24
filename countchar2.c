#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_char(char* chaine, char caractere, int ignore_case) {
    int i, compteur = 0;
    if (ignore_case) {
        caractere = tolower(caractere);
        for (i = 0; i < strlen(chaine); i++) {
            if (tolower(chaine[i]) == caractere) {
                compteur++;
            }
        }
    } else {
        for (i = 0; i < strlen(chaine); i++) {
            if (chaine[i] == caractere) {
                compteur++;
            }
        }
    }
    return compteur;
}

int main(int argc, char* argv[]) {
    if (argc < 3 || argc > 4) {
        printf("Usage : %s [-i] caractere chaine\n", argv[0]);
        return 1;
    }
    int ignore_case = 0;
    char* chaine;
    char caractere;
    if (argc == 4 && strcmp(argv[3], "-i") == 0) {
        ignore_case = 1;
        caractere = argv[2][0];
        chaine = argv[1];
    } else {
        caractere = argv[2][0];
        chaine = argv[1];
    }
    int resultat = count_char(chaine, caractere, ignore_case);
    printf("%d\n", resultat);
    return 0;
}
