#include <stdio.h>
#include <cs50.h>

void conversion_matrice_tableau(int matrice[][5], int colonnes, int lignes)
{
    int size = lignes * colonnes;
    int table[size];
    int k = 0;
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonnes; j++)
        {
            table[k] = matrice[i][j];
            k++;
        }
    }

    printf("le tableau est : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", table[i]);
    }
}

int main()
{
    int matrice[5][5];

    // Remplissage
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrice[i][j] = get_int("entrez l'element %d de votre matrice : ", i * 5 + j + 1);
        }
    }

    // Traitement :
    conversion_matrice_tableau(matrice, 5, 5);
}
