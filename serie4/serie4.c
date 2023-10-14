#include <cs50.h>
#include <stdio.h>
#include <string.h>



void impair(void)
{
    int tableau[10];


    for (int i = 0; i< 10;i++)
    {
         tableau[i] = get_int("Entrez la valeur de l'élément %d : ", i);
    }

    printf("Les éléments impairs du tableau sont : ");
    for (int i = 0; i < 10;i++)
    {
        if (tableau[i] % 2 != 0)
         {
            printf("%d ", tableau[i]);
         }
    }
    printf("\n");

}



void max(void) {

  float tableau[10];


  float max = tableau[0];
  int indice_max = 0;


  for (int i = 1; i < 10; i++) {
    tableau[i] = get_float("Entrez la valeur de l'élément %d : ", i);
    if (tableau[i] > max) {
      max = tableau[i];
      indice_max = i;
    }
  }


  printf("Le maximum est %f et sa position est %d\n", max, indice_max);
}


void matrice(void)
{
    bool valeur_trouve;
    int d = 0 ;
    int e = 0;


    int n = get_int("Entrer le nombre de lignes: ");
    int m = get_int("Entrer le nombre de colones: ");
    int matrice[n][m];
    for (d= 0;d<n ;d++)
    {
      for ( e =0;e<m;e++)
      {
        matrice[d][e] = get_int("Entrer un nombre");
      }
    }

    int valeur_utilisateur = get_int("Entrer la valeur a rechercher: ");

    int  j = 0;
    int  i = 0;
    valeur_trouve = false;

    for ( i = 0; i < n && !valeur_trouve; i++) {
      for ( j = 0; j < m && !valeur_trouve; j++) {

        if (matrice[i][j] == valeur_utilisateur) {
          valeur_trouve = true;
          break;
      }
    }
  }

  if (valeur_trouve)
  {
    printf("La valeur a été trouvée à la position (%d, %d).\n", i, j);
  }
  else
  {
    printf("La valeur n'a pas été trouvée.\n");
  }
}



void matrice2(void)
{
  int n,m,i,j,valeur,compteur = 0;


  n = get_int("Nombre de lignes : ");
  m = get_int("Nombre de colonnes : ");


  int matrice[n][m];


  for (i = 0;i<n;i++)
  {
    for (j=0;j<m;j++)
    {
      matrice[i][j] = get_int("matrice[%d][%d] = ",i,j);
    }
  }

  valeur = get_int("Valeur a compter : ");

  for (i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if (matrice[i][j] == valeur)
      {
        compteur++;
      }
    }
  }

  printf("Le nombre d'occurrences de l'élément %d est %d\n",valeur,compteur);
}



struct Compte
{
  int numero;
  char nom[32];
  char prénom[32];
};



void bank(void)
{
  int n;
  struct Compte comptes[100];

  n = get_int("Entrez le nombre de comptes: ");


  for (int i = 0;i<n;i++)
  {
    strcpy(comptes[i].nom,get_string("Entrer le nom de l'utilsateur:  "));
    comptes[i].numero = get_int("Entrer le nombre de l'utilsateur: ");
     strcpy(comptes[i].prénom,get_string("Entrer le prénom de l'utilsateur:  "));

     }

  for (int i =0;i<n;i++)
  {
    printf("le compte :  %d \n",comptes[i].numero);
    printf("le numéro de compte : %d \n",comptes[i].numero);
    printf("Le nom : %s \n",comptes[i].nom);
    printf("Le prénom : %s \n",comptes[i].prénom);
  }



}




int main(void)
{
  int n;

  n = get_int("1 : impair, 2: max , 3: matrice , 4:matrice2, 5: bank :  ");

    if (n == 1)
    {
      impair();
    }
    if (n == 2 )
    {
      max();
    }
    if (n == 3)
    {
      matrice();
    }
    if (n == 4)
    {
        matrice2();
    }

    if (n == 5)
    {
      bank();
    }
}
