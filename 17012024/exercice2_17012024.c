#include <stdio.h>
#include <cs50.h>

struct Pere
{
    string nom;
    string date_nais;
    int nbr_enf;
    string liste_enf[50];
};

struct Pere Saisie()
{
    struct Pere p;

    p.nom = get_string("Entrez le nom du pere : ");
    p.date_nais = get_string("Entrez la date de naissance : ");

    do
    {
        p.nbr_enf = get_int("Entrez le nombre d'enfants : ");
    } while (p.nbr_enf < 0 || p.nbr_enf > 50);

    for (int i = 0; i < p.nbr_enf; i++)
    {
        p.liste_enf[i] = get_string("Entrez le nom de votre %d enfant : ", i);
    }

    return p;
}

void Affichage(struct Pere p)
{
    printf("Le nom du père est : %s\n", p.nom);
    printf("La date de naissance est : %s\n", p.date_nais);
    printf("Le nombre d'enfants est : %d\n", p.nbr_enf);

    for (int i = 0; i < p.nbr_enf; i++)
    {
        printf("L'enfant %d est %s\n", i+1 , p.liste_enf[i]);
    }
}

int main()
{
    struct Pere p = Saisie();

    Affichage(p);

    return 0;
}
