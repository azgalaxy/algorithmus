#include <stdio.h>
#include <string.h>

void remplire_tableau(char tab[][20], int size)
{
    printf("Veuillez saisir %d mots séparés par des espaces :\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%s", tab[i]);
    }
}

void afficher_ordre_inverse(char tab[][20], int size)
{
    printf("\nMots dans l'ordre inverse :\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%s ", tab[i]);
    }
    printf("\n");
}

int main()
{
    char mots[5][20];
    remplire_tableau(mots, 5);
    afficher_ordre_inverse(mots, 5);
    return 0;
}
