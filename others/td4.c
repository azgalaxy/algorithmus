#include <cs50.h>
#include <stdio.h>

void exercice1()
{
    // controle de saisie du tableau
    int n;
    do
    {
        n = get_int("entrer un entier n entre 0 et 50 : ");
    }
    while (n <= 0 || n > 50);
    // intiation du tableau
    int tab[n];
    // controle de saisie des entiers
    for (int i = 0; i < n; i++)
    {
        tab[i] = get_int("entrer un entier entre -30 et 30 : ");
        while (tab[i] > 30 || tab[i] < -30)
        {
            tab[i] = get_int("entrer un entier entre -30 et 30 : ");
        }
    }
    printf("le tableau est : ");

    for (int i = 0; i < n; i++)
    {
        printf("%i ", tab[i]);
    }
    /*
        int tab2inv[n];
        // tableau inverse
        for(int i = 0 ; i<n ; i++)
        {
            tab2inv[n-1-i] = tab[i];
        }
        printf("\nle tableau inversé est : ");
        for (int i = 0; i < n; i++)
        {
            printf("%i ",tab2inv[i]);
        }
    */
    // positive et négative
    int tp[n];
    int tn[n];

    int j = 0;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (tab[i] > 0)
        {
            tp[j] = tab[i];
            j = j + 1;
        }
        else if (tab[i] < 0)
        {
            tn[k] = tab[i];
            k = k + 1;
        }
    }

    printf("\nle tableau positif : ");
    for (int i = 0; i < j; i++)
    {
        printf("%i ", tp[i]);
    }

    printf("\nle tableau négatif : ");
    for (int i = 0; i < k; i++)
    {
        printf("%i ", tn[i]);
    }
}

void exercice2()
{
    char tm[30];
    char tm2[6] = {'i','s', 't', 'c', 'o','m'};
    int  occurance[6];
    int  size = 0;
    do
    {
        size++;
        tm[size] = get_char("entrer des caractéres en miniscule : ");
    }
    while (tm[size] < 'z' && tm[size] >= 'a');
    printf("\n la taille du tableau : %i \n", size);
    for (int i = 0; i < size + 1; i++)
    {
        printf("%c ", tm[i]);
    }

    int occ = 0;

    char car;
    do
    {
        car = get_char("\n entrer un caractere : ");
    }
    while (car < 'a' && car > 'z');
    for (int i = 0; i < size + 1; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (tm[i] == tm2[j])
            {
                occ = occ + 1;
            }
            occurance[j] = occ;
        }
    }
    printf("\n nombre d'occurance de %c est : %i ", car, occ);
    for (int i = 0; i <6; i++)
    {
        printf("%i ", occurance[i]);
    }
}

int main(void)
{
    // exercice1();
    exercice2();
}