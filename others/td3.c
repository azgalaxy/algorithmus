#include <cs50.h>
#include <stdio.h>

void exercice1()
{
    int montant = get_int("entrer un montant en dinar : ");
    int n = 0;

    int b100 = montant / 100;
    n = montant % 100;
    int b50 = n / 50;
    n = n % 50;
    int b10 = n / 10;
    n = n % 10;
    int b5 = n / 5;
    n = n % 5;
    int b2 = n / 2;
    n = n % 2;
    int b1 = n / 1;
    n = n % 1;

    printf("%i * 100 + %i * 50 + %i * 10 + %i * 5 + %i * 2 + %i * 1 \n", b100, b50, b10, b5, b2, b1);
}

void exercice2()
{
    int tableau_mois[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int nombre;
    do
    {
        nombre = get_int("entrer un nombre entre 0 et 365 : ");
    }
    while (nombre <= 0 || nombre >= 365);
    int i = 0;
    int jour = 0;
    int mois = 0;

    while(i<12 && nombre>tableau_mois[i])
    {
        nombre = nombre - tableau_mois[i];
        mois = mois + 1 ;
        i = i + 1;
    }
    jour = nombre ;

    printf("le jour %i dans le mois %i de l'année 2023",jour,mois);
}

void exercie3()
{
    int tableau[12];
    tableau[0] = 1;
    tableau[1] = 1;
    for(int i = 2 ; i < 12 ; i++)
    {
        tableau[i] = tableau[i-1] + tableau[i-2] ;
    }

    printf(" le nombre de lapin qu'on a àla fin de 12 mois : %i " , tableau[11]);
}

int main()
{
    // exercice1();
    // exercice2();
     exercie3();
}