#include <stdio.h>

int main()
{
    // Déclaration des matrices
    int matrice_originale[3][3], matrice_transposee[3][3];
    int i, j;

    // Remplissage de la matrice originale
    printf("Entrez les éléments de la matrice originale :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d] : ", i, j);
            scanf("%d", &matrice_originale[i][j]);
        }
    }

    // Opération de transposition
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                matrice_transposee[i][j] = matrice_originale[j][i];
            }
            else
            {
                matrice_transposee[i][j] = matrice_originale[i][j];
            }
        }
    }

    // Affichage de la matrice transposée
    printf("Matrice transposée :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrice_transposee[j][i]); 
        }
        printf("\n");
    }

    return 0;
}
