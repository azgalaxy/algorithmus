#include <stdio.h>

int main()
{
    // Déclaration des matrices
    int matrice1[3][3], matrice2[3][3], matrice_resultat[3][3];
    int i, j, k;

    // Remplissage de la matrice 1
    printf("Entrez les éléments de la matrice 1 :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d] : ", i, j);
            scanf("%d", &matrice1[i][j]);
        }
    }

    // Remplissage de la matrice 2
    printf("Entrez les éléments de la matrice 2 :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d] : ", i, j);
            scanf("%d", &matrice2[i][j]);
        }
    }

    // Calcul du produit matriciel
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrice_resultat[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                matrice_resultat[i][j] += matrice1[i][k] * matrice2[k][j];
            }
        }
    }

    // Affichage de la matrice résultat
    printf("Matrice résultat :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrice_resultat[i][j]);
        }
        printf("\n");
    }
}
