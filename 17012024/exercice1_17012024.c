#include <stdio.h>
#include <cs50.h>

////////////////////////////////////////////////////////////////////////////
struct nombre_complexe
{
    int partie_entiére;
    int partie_réelle;
}

struct date
{
    int jour;
    int mois;
    int année;
}

struct stage
{
    char intitulé[50];
    struct date date_début;
    struct date date_fin;
    int nombre_places;
}

struct identité
{
    char nom[50];
    char prénom[50];
    struct date date_naissance;
}

struct fiche_bibliographique
{
    char titre_livre[50];
    struct identité auteurs[10];
    struct date date_paruation;
    struct identité éditeur;
    char ISBN[50];
}

//////////////////////////////////////////////////////////////////////////////
1: nombre_complexe.partie_réelle = get_int("entrez la partie réelle de votre nombre : ");

2:
do
{
    y.date.jour = get_int("entrez le jour : ");
}
while(y.date.jour < 1 || y.date.jour >31);

3:
do
{
    z.stage.date.mois = get_int("entrez le mois : ");
}
while(z.stage.date.mois < 1 || z.stage.date.mois > 12);

4:
g.identité.date.année = get_int("entrez l'année : ");

5:
do
{
    h.auteur[0].date_naissance.date.jour = get_int("entrez le jour : ")
}
while(y.date.jour < 1 || y.date.jour >31);



