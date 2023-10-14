#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

float minx(float a, float b) {
  return a < b ? a : b;
}


float maxx(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

void max(float a, float b, float c, float d) {
  float min = minx(minx(a, b), minx(c, d));
  float max = maxx(maxx(a, b), maxx(c, d));


  printf("The minimum is %.2f.\n", min);
  printf("The maximum is %.2f.\n", max);
}

void max_min() {
  int a = get_int("Entrer a ");
  int b = get_int("Entrer b ");
  int c = get_int("Entrer c ");
  int d = get_int("Entrer d ");




  max(a,b,c,d);
}

//////////////////////////////////EXRCICE3//////////////////////////////////////////

struct etudiant {
  int numero;
  char nom[256];
  char prenoms[256];
  float moyenne;
};

void trier_par_moyenne(struct etudiant *etudiants, int n) {
  int i, j;
  struct etudiant temp;


  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {

      if (etudiants[i].moyenne < etudiants[j].moyenne) {
        temp = etudiants[i];
        etudiants[i] = etudiants[j];
        etudiants[j] = temp;
      }
    }
  }
}


void etudiants() {
  struct etudiant *etudiants = NULL;
  int n;
  n = get_int("Give the number of students");

  etudiants = malloc(n * sizeof(struct etudiant));


  for (int i = 0; i < n; i++) {
    etudiants[i].numero = get_int("Give me a numero: ");
    char  *ter=  get_string("Enter the name: ");
    strcpy(etudiants[i].nom,ter);


    etudiants[i].moyenne = get_int("Give an moyenne: ");
  }



  trier_par_moyenne(etudiants, n);


  printf("The sorted students:\n");
  for (int i = 0; i < n; i++) {
    printf("  %d. %s (%.2f)\n", etudiants[i].numero, etudiants[i].nom, etudiants[i].moyenne);
  }
free(etudiants);

}

/////////////////////////////EXERCICE4//////////////////////////////////

struct Produit {
  int reference;
  float prix;
  int quantite;
};



void produit(struct Produit *produit, int quantite_commandee) {
  int reference = get_int("Entrez la référence du produit : ");
  float prix = get_float("Entrez le prix du produit : ");
  int quantite = get_int("Entrez la quantité disponible du produit : ");

  if (quantite_commandee > quantite) {
    printf("La quantité commandée est supérieure à la quantité disponible.\n");
    return;
  }


  float prix_commande = prix * quantite_commandee;


  printf("Référence : %d\n", reference);
  printf("Prix : %.2f DA\n", prix);
  printf("Quantité commandée : %d\n", quantite_commandee);
  printf("Prix de la commande : %.2f DA\n", prix_commande);
}



///////////////////////////////MAIN FUNCTION/////////////////////////////////////





int main(void)
{
  //struct Produit produitt;
  int n;

  n = get_int("1 : max_min, 2: max , 3: Produit :  ");

    if (n == 1)
    {
      max_min();
    }
    if (n == 2 )
    {
      etudiants();
    }
    if (n == 3)
    {
      int num = get_int("Give me numbers pls: ");
      struct Produit produitt;
      produit(&produitt,num);
    }

}


