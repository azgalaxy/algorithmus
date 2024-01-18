#include <stdio.h>

struct Produit
{
    int reference;
    float prix;
    int quantite_disponible;
};

struct Produit saisie_produit()
{
    struct Produit p;

    printf("Entrez la référence du produit : ");
    scanf("%d", &p.reference);

    printf("Entrez le prix du produit en dinars : ");
    scanf("%f", &p.prix);

    printf("Entrez la quantité disponible du produit : ");
    scanf("%d", &p.quantite_disponible);

    return p;
}

void afffichage_produit(struct Produit p)
{
    printf("Référence du produit : %d\n", p.reference);
    printf("Prix du produit : %.2f dinars\n", p.prix);
    printf("Quantité disponible du produit : %d\n", p.quantite_disponible);
}

void commander_produit(struct Produit p)
{
    int quantite_commandee;

    printf("Entrez la quantité que vous souhaitez commander : ");
    scanf("%d", &quantite_commandee);
    afffichage_produit(p);

    if (quantite_commandee > p.quantite_disponible)
    {
        printf("la quantité commandée éxcéde la quantité disponible ");
    }
    else
    {
        float prix_total = p.prix * quantite_commandee;
        printf("Prix total à payer pour la commande : %.2f dinars\n", prix_total);
    }
}

int main()
{
    struct Produit produit = saisie_produit();
    commander_produit(produit);

    return 0;
}
