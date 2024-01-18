#include <stdio.h>
#include <cs50.h>


struct panneau
{
    int largeur;
    int longueur;
    int épaisseur;
    int type_bois;
};

struct panneau saisie()
{
    struct panneau p;
    p.largeur = get_int("entrez la largeur du panneau : ");
    p.longueur = get_int("entrez la longeur du panneau : ");
    p.épaisseur = get_int("entrez l'epaisseur du panneau : ");
    do
    {
        p.type_bois = get_int("entrez le type du bois : ");
    }
    while(p.type_bois < 0 || p.type_bois > 2);

    return p;
}

void affichage (struct panneau p)
{
    printf("la largeur du panneau : %d \n",p.largeur);
    printf("la longueur du panneau : %d \n",p.longueur);
    printf("l'épaisseur du panneau : %d \n",p.épaisseur);
    if (p.type_bois == 0)
    {
        printf("le type de bois est pin \n");
    }
    else if (p.type_bois == 1)
    {
        printf("le type de bois est chene \n");
    }
    else
    {
        printf("le type de bois est hetre \n");
    }
}

int calculer_volume (struct panneau p)
{
    int volume = p.largeur * p.épaisseur * p.longueur;
    return volume;
}

int main()
{
    struct panneau p = saisie();
    printf("-------------les proprietes du panneau-------------\n");
    affichage(p);
    int volume = calculer_volume(p);
    printf("le volume du panneau : %d \n",volume);
}
