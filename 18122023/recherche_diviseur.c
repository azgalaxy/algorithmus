#include <stdio.h>

void saisie(int *size1, int *size2)
{
    do
    {
        printf("entrez la taille du tableau T1 : ");
        scanf("%d", size1);
    }
    while (*size1 < 1 || *size1 > 30);

    do
    {
        printf("entrez la taille du tableau T2 : ");
        scanf("%d", size2);
    }
    while (*size2 < 1 || *size2 > 20);
}

void remplire(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("entrez un élément du tableau : ");
        scanf("%d", &tab[i]);
    }
}

void affichage(int tab[], int size)
{
    printf("votre tableau est  : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void recherche_diviseur(int tab1[], int tab2[], int size1, int size2, int position)
{
    printf("Les diviseurs de l'élément à la position %d sont : ", position);
    for (int i = 0; i < size2; i++)
    {
        if (tab1[position] % tab2[i] == 0)
        {
            printf("%d ", tab2[i]);
        }
    }
    printf("\n");
}

int main()
{
    int size1, size2;
    int Tab1[30], Tab2[20];
    int position;

    saisie(&size1, &size2);

    // Remplissage et affichage du 1er tableau T1
    remplire(Tab1, size1);
    affichage(Tab1, size1);

    // Remplissage et affichage du 2eme tableau T2
    remplire(Tab2, size2);
    affichage(Tab2, size2);

    // Affichage des diviseurs
    do
    {
        printf("entrez la position de l'element dont vous chercher les diviseurs : ");
        scanf("%d", &position);
    }
    while (position <= 0 || position > size1);

    recherche_diviseur(Tab1, Tab2, size1, size2, position);

    return 0;
}
