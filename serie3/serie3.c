#include <cs50.h>
#include <stdio.h>
void algorithm1(void);
void  algorithm2(void);
void algorithm3(void);
void Even(void);
void prix(void);
void produit(void);
void numbers(void);
void prime(void);
void code(void);

int main(void)
{
    //algorithm1();
    //Even();
    //prix();
    //produit();
    //numbers();
    //prime();
    //code();

}

void algorithm1(void)
{
    int i;
    for ( i= 2; i<= 8; i++){
        printf("Bonjour\n");
        printf("%d\n",i);
    }
    printf("fin\n");
}


void  algorithm2(void)
{
    bool encore = true;

    while(encore)
    {
        printf("Bonjour\n");
        encore = false;
    }
    printf("fin\n");
}


void algorithm3(void)
{
    bool encore = false;

    do {
      printf("Salut\n");
      encore = true;
    } while (encore);

    printf("fin\n");
}




void prix(void) {

  int n = get_int("Combien d'articles ?\n");
  float somme = 0;
  for (int i = 0; i < n; i++) {

    float prix = get_float("Entrez le prix de l'article %d : ", i + 1);


    somme += prix;
  }
  printf("La somme des prix est de %.2f\n", somme);


}




void Even(void)
{
    int n = get_int("Enter un Nombre:  ");
    int i;

    for (i = (n+1);i<= n+10;i++){
        if (i % 2 ==0){
            printf("%d\n",i);
        }
    }

}

void produit(void) {

  int n = get_int("Entrez un entier : ");

  float produit = 1;

  for (int i = 1; i <= n; i++) {
    produit *= i;
  }

  printf("Le produit est de %.2f\n", produit);
}


void numbers(void) {

  float f = 1;
  int n = get_int("Entrez un nombre : ");
  if (n >= 1) {

    for (int i = 2; i <= n; i++) {

      f *= i;
    }
  }

  printf("Le résultat est %.2f\n", f);

}

void prime(void) {

  int n;


  n = get_int("Entrez un nombre : ");

  if (n == 1 || n % 2 == 0) {

    printf("Ce nombre n'est pas premier\n");
  } else {

    printf("Ce nombre est premier\n");
  }

}

#include <stdio.h>
#include <cs50.h>

void code(void) {



    int t = 3;
    int n = get_int("Entrez un nombre : ");

  while (t == 3) {

    printf(":(\n");

    if (n == 3) {
      printf("LE code est correct\n");
      break;
    } else {

      printf("LE code n'est pas correct\n");
    }
  }


}





