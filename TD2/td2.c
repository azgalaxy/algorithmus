#include <cs50.h>
#include <stdio.h>

void exercice1()
{
    int nombre ;
    do
    {
        nombre = get_int("entrer un entier entre 10 et 20 :  ");
        if (nombre > 20)
        {
            printf("plus petit ! \n");
        }
        else if (nombre < 10)
        {
            printf("plus grand ! \n");
        }
        else if(nombre >10 && nombre<20)
        {
            printf("la réponse convienne! \n");
        }
    }
    while(nombre >20 || nombre <10 );
}

void exercice2_v1()
{
    int nombre = get_int("entrer un nombre de départ");
    for(int i = 1 ; i <= 10 ; i++)
    {
        nombre = nombre + 1 ;
        printf("%i  " , nombre);
    }
}

void exercice2_v2()
{
    int nombre = get_int("entrer un nombre de départ :  ");
    int i = 1;
    while(i <= 10)
    {
        nombre = nombre + 1 ;
        i = i + 1;
        printf("%i " , nombre);
    }
}

void exercice3()
{
    int x = get_int("entrer un entier  : ");
    int max = x ;
    int i = 1 ;
    printf("%i " , x);
    while(i <= 19)
    {
        int nombre = get_int("entrer un entier : ");
        if(nombre > max)
        {
            max = nombre;
            printf("la position est %i " , i);
        }
        i = i + 1;
    }
    printf("le max est : %i" , max);
}

void exercice4()
{
    const int constante = 10 ;
    int tentative = 0 ;
    int proposition;
    do
    {
         proposition = get_int("donner une proposition :  ");
        if(proposition > constante)
        {
            printf("plus petit !  \n");

        }
        else if (proposition < constante)
        {
            printf("plus grand !  \n");
        }
        else if (proposition == constante)
        {
            printf("Bravo! vous avez gagné et la constante est : %i  \n" , constante);
        }
        
        tentative = tentative + 1;

        if (tentative == 5)
        {
            printf("t'as perdu !");
            break;
        }

    }
    while(tentative < 5 || proposition != constante);
}

int main()
{
    //exercice1();
    //exercice2_v1();
    //exercice2_v2();
    //exercice3();
    exercice4();
}