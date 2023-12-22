#include <stdio.h>

void extrairePosNeg(int tableau[], int taille, int Pos[], int *taillePos, int Neg[], int *tailleNeg) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] >= 0) {
            Pos[(*taillePos)++] = tableau[i];
        } else {
            Neg[(*tailleNeg)++] = tableau[i];
        }
    }
}

void afficherTableau(int tableau[], int taille) {
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int monTableau[] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
    int taille = sizeof(monTableau) / sizeof(monTableau[0]);

    int Pos[10], taillePos = 0;
    int Neg[10], tailleNeg = 0;

    extrairePosNeg(monTableau, taille, Pos, &taillePos, Neg, &tailleNeg);

    printf("Tableau original : ");
    afficherTableau(monTableau, taille);

    printf("Tableau des positifs : ");
    afficherTableau(Pos, taillePos);

    printf("Tableau des négatifs : ");
    afficherTableau(Neg, tailleNeg);

    return 0;
}

