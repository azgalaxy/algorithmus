#include <cs50.h>
#include <stdio.h>

int saisir_taille()
{
    int size;
    do
    {
        size = get_int("Entrez la taille du tableau : ");
    }
    while (size <= 0 || size > 50);
    return size;
}

void remplire_tableau(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = get_int("Entrez un élément de votre tableau : ");
    }
}

void afficher_tableau(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void echanger_elements(int tab[], int i, int j)
{
    int temp;
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

void inverser_tableau(int tab[], int taille)
{
    for (int i = 0; i < taille / 2; i++)
    {
        int j = taille - i - 1;
        echanger_elements(tab, i, j);
    }
}

int main()
{
    int size = saisir_taille();
    int tab[size];
    remplire_tableau(tab, size);


    printf("Tableau original : ");
    afficher_tableau(tab, size);

    inverser_tableau(tab, size);

    printf("Tableau inverse : ");
    afficher_tableau(tab, size);

    return 0;
}
