#include <cs50.h>
#include <stdio.h>

void exercice1()
{
    int x = get_int("entrer un entier x : ");
    if (x >= 0)
    {
        printf("|%i| = %i \n", x, x);
    }
    else
    {
        printf("|%i| = %i \n", x, -x);
    }
}

void exercice2()
{
    int x = get_int("entrer un entier x : ");
    if ((x % 2) == 0)
    {
        printf("le nombre %i est paire \n", x);
    }
    else
    {
        printf("le nombre %i est impaire \n", x);
    }
}

void exercice3()
{

    char l1 = get_char(" enrer l1 : ");
    char l2 = get_char(" enrer l2 : ");
    char l3 = get_char(" enrer l3 : ");

    if ((int) l2 == (int) l1 + 1 && (int) l3 == (int) l2 + 1)
    {
        printf("les lettres l1 : %c , l2 : %c , l3 : %c sont consécutifs", l1, l2, l3);
    }
    else
    {
        printf("les lettres l1 : %c , l2 : %c , l3 : %c ne sont pas consécutifs", l1, l2, l3);
    }
}

void exercice4()
{
    int n = get_int("entrer un entier n : ");
    int x = 0;
    int max = x;
    for (int i = 0; i < n; i++)
    {
        int nombre = get_int("entrer un nombre : ");
        if (nombre > max)
        {
            max = nombre;
        }
    }
    printf("le max est %i", max);
}

void exercice5()
{
    int a = get_int("entrer un nombre a : ");
    int b = get_int("entrer un nombre b : ");

    if ((a > 0 && b > 0) || (a < 0 && b < 0))
    {
        printf("le produit de %i et de %i est positif  \n", a, b);
    }
    else
    {
        printf("le produit de %i et de %i est negatif  \n", a, b);
    }
}

void exercice6()
{
    int jour;

    do
    {
        jour = get_int("entrer un nombre entre 0 et 7 : ");
    }
    while (jour < 0 || jour > 7);

    if (jour == 1)
    {
        printf("le jour correspondant est dimanche \n");
    }
    else if (jour == 2)
    {
        printf("le jour correspondant est lundi \n");
    }
    else if (jour == 3)
    {
        printf("le jour correspondant est mardi \n");
    }
    else if (jour == 4)
    {
        printf("le jour correspondant est mercredi \n");
    }
    else if (jour == 5)
    {
        printf("le jour correspondant est jeudi \n");
    }
    else if (jour == 6)
    {
        printf("le jour correspondant est vendredi \n");
    }
    else
    {
        printf("le jour correspondant est samedi \n");
    }
}

int main(void)
{
    // exercice1();
    // exercice2();
    // exercice3();
    // exercice4();
    // exercice5();
    // exercice6();
}