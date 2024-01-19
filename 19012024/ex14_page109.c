#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COLOMN 3

int main(){
    int matrice[ROW][COLOMN];
    int taille;

    do{
        puts("Donnez la valeur de taille : ");
        scanf("%d", &taille);
    }while(taille < 0 || taille > ROW || taille > COLOMN);

    puts("Donnez les valeurs de la matrices : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLOMN; j++){
            printf("Matrice[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    puts("\nLa matrice initial est : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLOMN; j++){
            printf("%d | ", matrice[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int temp;
    for(int i = 0; i <= 1; i++){
        for(int j = i+1; j <= 2; j++){
            temp = matrice[i][j];
            matrice[i][j] = matrice[j][i];
            matrice[j][i] = temp;
        }
    }

    puts("\nLa nouvelle matrice est : \n");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLOMN; j++){
            printf("%d | ", matrice[i][j]);
        }
        printf("\n");
    }


    return 0;
}

