#include <stdio.h>

void saisie_tableau(int tableau[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("Entrez l'élément à la position %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }
}

void affichage_tableau(int tableau[], int taille)
{
    printf("Tableau actuel: ");
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

void tri_tableau(int tableau[], int taille)
{
    for (int i = 0; i < taille - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < taille; j++)
        {
            if (tableau[j] < tableau[min_index])
            {
                min_index = j;
            }
        }

        int temp = tableau[i];
        tableau[i] = tableau[min_index];
        tableau[min_index] = temp;
    }
}

int main()
{
    int dimension;
    printf("Entrez la dimension du tableau: ");
    scanf("%d", &dimension);
    int mon_tableau[dimension];
    saisie_tableau(mon_tableau, dimension);
    affichage_tableau(mon_tableau, dimension);
    tri_tableau(mon_tableau, dimension);
    affichage_tableau(mon_tableau, dimension);
}
