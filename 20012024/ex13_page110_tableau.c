#include <stdio.h>
#include <stdlib.h>
#define size 5

void Affiche_Matrice(int matrice[size][size]);

int main(){
    int matrice[size][size];

    puts("Saisie des composants de la matrices : \n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("Matrice[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    Affiche_Matrice(matrice);

    return 0;
}

void Affiche_Matrice(int matrice[size][size]){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d | ", matrice[i][j]);
        }
        printf("\n");
    }
}
