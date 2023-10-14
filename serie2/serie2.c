#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
void valeurAbsolu(void);
void pair(void);
void Lettres(void);
void max(void);
void negative_postif(void);
void week(void);

int main(void)
{
    //valeurAbsolu();
    //pair();
    //Lettres();
    //max();
    //negative_postif();
    //week();
}

void valeurAbsolu(void)
{
    int nombre = get_int("Entrer un nombre : ");

    int résultat = abs(nombre);

    printf("La valuer absolue est %i /n ",résultat);
}

void pair(void)
{
    int number = get_int("Entrer un nombre: ");

    if (number /2 == 0)
    {
        printf("Ce nombre est pair\n");
    }
    else
    {
        printf("Ce nombre est unpair\n");
    }

}


void Lettres(void)
{
    char lettre1;
    char lettre2;
    char lettre3;


    lettre1 = get_char("give me a random letter: ");
    lettre2 = get_char("give me a random letter: ");
    lettre3 = get_char("give me a random letter: ");


    if (lettre1 < lettre2 && lettre2 < lettre3)
    {
        printf("Les lettres sont classées alphabétiquement");
    }
    else
    {
        printf("Les lettres ne sont pas classées");
    }
}

void max(void) {

  int n;


  n = get_int("Entrez la valeur de n : ");

  int variables[n];

  for (int i = 0; i < n; i++) {
    variables[i] = get_int("Entrez la variable %d : ", i + 1);
  }


  int maximum = variables[0];
  for (int i = 1; i < n; i++) {
    if (variables[i] > maximum) {
      maximum = variables[i];
    }
  }


  printf("Le maximum est %d\n", maximum);

}




void negative_postif()
{
    int nombre1 = get_int("Entrer un nombre:  ");
    int nombre2 = get_int("Enter un autre anombre :) :  ");

    int résultat = nombre1 * nombre2;

    if (résultat < 0)
    {
        printf("Le produit est négatif\n");
    }
    else
    {
        printf("Le produit n'est pas négatif\n");
    }
}

void week(void) {

  int numero_jour;


  numero_jour = get_int("Entrez le numéro du jour : ");


  string nom_jour;
  switch (numero_jour) {
    case 1:
      nom_jour = "Lundi";
      break;
    case 2:
      nom_jour = "Mardi";
      break;
    case 3:
      nom_jour = "Mercredi";
      break;
    case 4:
      nom_jour = "Jeudi";
      break;
    case 5:
      nom_jour = "Vendredi";
      break;
    case 6:
      nom_jour = "Samedi";
      break;
    case 7:
      nom_jour = "Dimanche";
      break;
    default:
      printf("Donner un numéro de jour valide (entre 1 et 7).");
      return;
  }


  printf("Le jour est : %s\n", nom_jour);
}







