#include <stdio.h>
#include <cs50.h>

struct joueur
{
    string nom;
    string prénom;
    int age;
    int score;
};

struct équipe
{
    struct joueur joueur1;
    struct joueur joueur2;
    string nom;
};

struct joueur saisie_joueur()
{
    struct joueur j;
    j.nom = get_string("Entrez le nom du joueur : ");
    j.prénom = get_string("Entrez le prénom du joueur : ");
    j.age = get_int("Entrez l'âge du joueur : ");

    do
    {
        j.score = get_int("Entrez le score du joueur (entre 0 et 100) : ");
    }
    while (j.score < 0 || j.score > 100);

    return j;
}

struct équipe saisie_equipe()
{
    struct équipe e;
    e.joueur1 = saisie_joueur();
    e.joueur2 = saisie_joueur();
    e.nom = get_string("Entrez le nom de votre équipe : ");
    return e;
}

void afficher_joueur(struct joueur j)
{
    printf("Le nom du joueur est : %s\n", j.nom);
    printf("Le prénom du joueur est : %s\n", j.prénom);
    printf("L'âge du joueur est : %d\n", j.age);
    printf("Le score du joueur est : %d\n", j.score);
}

void afficher_equipe(struct équipe e)
{
    printf("---- Équipe ----\n");
    afficher_joueur(e.joueur1);
    afficher_joueur(e.joueur2);
    printf("Le nom de l'équipe est : %s\n", e.nom);
}

int main()
{
    struct équipe tableau_equipe[4];

    for (int i = 0; i < 4; i++)
    {
        tableau_equipe[i] = saisie_equipe();
    }

    printf("---------- Les équipes sont --------------\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Équipe %d\n", i + 1);
        afficher_equipe(tableau_equipe[i]);
        printf("------------------------\n");
    }

    return 0;
}
