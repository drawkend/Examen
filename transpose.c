#include <stdio.h>

void transpose(float M[3][3], float tM[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tM[i][j] = M[j][i];
        }
    }
}

int main() {
    float M[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float newM[3][3];
    int i, j;

    printf("Matrice de départ :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", M[i][j]);
        }
        printf("\n");
    }

    transpose(M, newM);

    printf("\nMatrice transposée :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", newM[i][j]);
        }
        printf("\n");
    }

    return 0;
}
