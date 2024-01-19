#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COLOMN 3

int main(){
    int matrice1[ROW][COLOMN], matrice2[ROW][COLOMN];
    int res[ROW][COLOMN];

    puts("Donnez les valeurs de la 1er matrices : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLOMN; j++){
            printf("Matrice1[%d][%d] = ", i, j);
            scanf("%d", &matrice1[i][j]);
        }
    }

    puts("Donnez les valeurs de la 2éme matrices : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLOMN; j++){
            printf("Matrice2[%d][%d] = ", i, j);
            scanf("%d", &matrice2[i][j]);
        }
    }

    puts("\nLa 1er matrice est : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLOMN; j++){
            printf("%d | ", matrice1[i][j]);
        }
        printf("\n");
    }

    puts("\nLa 2éme matrice est : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLOMN; j++){
            printf("%d | ", matrice2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLOMN; j++){
            int somme = 0;
            for(int k = 0; k < 3; k++){
                somme += matrice1[i][k] * matrice2[k][j];
            }
            res[i][j] = somme;
        }
    }

    printf("\nLe produit des deux matrices 1 et 2 est \n");
    for(int i = 0; i < ROW; i++)
    {
        for(int j=0; j < COLOMN; j++)
        {
            printf("%d | ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
