#include <stdio.h>
#include <cs50.h>

struct Nombre_rationnelle
{
    int numérateur;
    int dénominateur;
};

struct Nombre_rationnelle Saisie()
{
    struct Nombre_rationnelle nb;
    nb.numérateur = get_int("Entrez votre numérateur : ");

    do
    {
        nb.dénominateur = get_int("Entrez votre dénominateur (différent de zéro) : ");
    }
    while (nb.dénominateur == 0);

    return nb;
}

void Affichage(struct Nombre_rationnelle nb)
{
    printf("Le nombre rationnel est %d/%d\n", nb.numérateur, nb.dénominateur);
}

float Somme(struct Nombre_rationnelle nb1, struct Nombre_rationnelle nb2)
{
    float somme = ((nb1.numérateur * nb2.dénominateur) + (nb2.numérateur * nb1.dénominateur)) / (float)(nb1.dénominateur * nb2.dénominateur);
    return somme;
}

float Multiplication(struct Nombre_rationnelle nb1, struct Nombre_rationnelle nb2)
{
    float résultat = (nb1.numérateur * nb2.numérateur) / (float)(nb1.dénominateur * nb2.dénominateur);
    return résultat;
}

int main()
{
    struct Nombre_rationnelle nb1 = Saisie();
    struct Nombre_rationnelle nb2 = Saisie();

    Affichage(nb1);
    Affichage(nb2);

    float somme = Somme(nb1, nb2);
    printf("La somme est : %f\n", somme);

    float multiplication = Multiplication(nb1, nb2);
    printf("Le résultat de la multiplication est %f\n", multiplication);

    return 0;
}
