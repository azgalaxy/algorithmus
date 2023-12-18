#include <stdio.h>
#include <cs50.h>

void saisir(int *size1, int *size2)
{
    do
    {
        *size1 = get_int("Entrez la taille du tableau Td : ");
    } while (*size1 < 3 || *size1 > 20);

    do
    {
        *size2 = get_int("Entrez la taille du tableau Te : ");
    } while (*size2 < 5 || *size2 > 20);
}

void remplire(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = get_int("Entrez un élément de votre tableau : ");
    }
}

void affichage(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int recherche_sous_tableau(int tab1[], int tab2[], int size1, int size2)
{
    for (int i = 0; i <= size2 - size1; i++)
    {
        int j = 0;
        while (j < size1 && tab1[i + j] == tab2[j])
        {
            j++;
        }

        if (j == size1)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size1, size2;
    int Td[20];
    int Te[20];
    int found;

    saisir(&size1, &size2);
    // Remplissage et affichage du 1er tableau Td
    remplire(Td, size1);
    affichage(Td, size1);

    // Remplissage et affichage du 2eme tableau Te
    remplire(Te, size2);
    affichage(Te, size2);

    // Recherche du sous tableau
    if (size1 > size2)
    {
        printf("Impossible d'effectuer la recherche ! \n");
    }
    else
    {
        found = recherche_sous_tableau(Td, Te, size1, size2);
        if (found == 0)
        {
            printf("Le tableau n'est pas trouvé!  \n");
        }
        else
        {
            printf("Le tableau est trouvé! \n");
        }
    }

    return 0;
}
