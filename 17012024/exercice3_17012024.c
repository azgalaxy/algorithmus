#include <stdio.h>
#include <cs50.h>

struct Date
{
    int jour;
    int mois;
    int annee;
};

struct Pere
{
    string nom;
    int nbr_enf;
    string liste_enf[50];
    struct Date date_naiss;
};

struct Pere Saisie()
{
    struct Pere p;

    p.nom = get_string("Entrez le nom du pere : ");

    // Saisie de la date de naissance
    do
    {
        p.date_naiss.jour = get_int("Entrez le jour de naissance : ");
    }
    while (p.date_naiss.jour < 1 || p.date_naiss.jour > 31);

    do
    {
        p.date_naiss.mois = get_int("Entrez le mois de naissance : ");
    }
    while(p.date_naiss.mois < 1 || p.date_naiss.mois > 12);

    p.date_naiss.annee = get_int("Entrez l'année de naissance : ");

    do
    {
        p.nbr_enf = get_int("Entrez le nombre d'enfants : ");
    }
    while (p.nbr_enf < 0 || p.nbr_enf > 50);

    for (int i = 0; i < p.nbr_enf; i++)
    {
        p.liste_enf[i] = get_string("Entrez le nom de votre %d enfant : ", i + 1);
    }

    return p;
}

void Affichage(struct Pere p)
{
    printf("Le nom du père est : %s\n", p.nom);
    printf("La date de naissance est : %d / %d / %d\n", p.date_naiss.jour, p.date_naiss.mois, p.date_naiss.annee);
    printf("Le nombre d'enfants est : %d\n", p.nbr_enf);

    for (int i = 0; i < p.nbr_enf; i++)
    {
        printf("L'enfant %d est %s\n", i + 1, p.liste_enf[i]);
    }
}

int main()
{
    struct Pere p = Saisie();
    Affichage(p);

    return 0;
}
