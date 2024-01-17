#include <stdio.h>
#include <stdlib.h>
#define size 30

/*Exercice 1 :                      */

/*typedef Nombre_Complexe{
    float partie_réelle;
    float partie_imaginaire;
} Nombre_Complexe;

typedef date{
    short jour;
    short mois;
    int année;
} date;

typedef identité{
    char nom[size];
    char prenom[size];
    int CIN;
    date naissance;
} identité;

typedef stage{
    char intitulé[size];
    date début;
    date fin;
    int nbr_places;
} stage;

typedef fiche_biblio{
    char titre_livre[size];
    identité auteur;
    short nbr_auteur;
    date parution;
    identité éditeur;
    char ISBN[size]
} fiche_biblio;*/

/*Pour accéder au champ il faut :     */
/*example : X.partie_réelle = cste    */
/*example : Y.partie_imaginaire = cste*/
/**************************************/

/*Exercice 2 :                        */
/*
typedef pere1{
    char nom[size];
    char date_nais[size];
    int nbr_enf;
    char liste_enf[size];
} pere1;*/

/*int main(){
    printf("Entrez le nom : \n"):
    scanf("%s", &pere1.nom);
    printf("Entrez la date de naissance : \n");
    scanf("%s", &pere1.date_nais);
    printf("Entrez le nbr_enf : \n");
    scanf("%d", &pere1.nbr_enf);
    printf("Entrez la liste_enf : \n");
    scanf("%s", &liste_enf);
}*/

/*Exercice 3 :                           */

/*typedef date{
    short jour;
    short mois;
    int année;
} date;

typedef pere2{
    char nom[size];
    date date_nais;
    int nbr_enf;
    char liste_enf[size][size];
} pere2;*/

/*int main(){
    printf("Entrez le nom : \n"):
    scanf("%s", &pere2.nom);
    printf("entrez le jour : ");
    scanf("%d", &pere2.date_nais.jour);
    printf("Entrez le nbr_enf : \n");
    printf("entrez le mois : ");
    scanf("%d", &pere2.date_nais.mois);
    printf("entrez l'année : ")
    scanf("%d", &pere2.date_nais.année);
    scanf("%d", &pere2.nbr_enf);
    for(int i = 1; i <= pere1.nbr_enf;i++){
        printf("Donner le nom de l'enfant num %d : ", i);
        scanf("%s", pere2.liste_enf[i]);
    }
}*/

/*Exercice 4 :                            */
/*
typedef pere1{
    char nom[size];
    char date_nais[size];
    int nbr_enf;
    char liste_enf[size];
} pere1;*/
/*
int main(){
    printf("Entrez le nom : \n");
    scanf("%s", &pere1.nom);
    printf("Entrez la date de naissancence : \n");
    scanf("%s", &pere1.date_nais);
    printf("Entrez le nbr_enf : ");
    scanf("%d", &pere1.nbr_enf);
    printf("Entrez la liste des enfants : ");
    scanf("%s", &pere1.liste_enf);
}*/

/*******************************************/

