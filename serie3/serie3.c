#include <cs50.h>
#include <stdio.h>

void exercice2()
{
    int s = 0;
    int size = get_int("enter le nombre d'article : ");
    for (int i = 0; i < size; i++)
    {
        int prix = get_int("donner les prix : ");
        s = s + prix;
    }
    printf("le prix totale est : %i \n", s);
}

void exercice3_v1()
{
    int nombre = get_int("entrer un nombre : ");
    for (int i = nombre+1 ; i <= nombre+10; i++)
    {
        printf("%i ", i);
    }
}

void exercice3_v2()
{
    int nombre = get_int("entrer un nombre : ");
    int i = 0;
    while (i < 10)
    {
        nombre = nombre + 1;
        if ((nombre % 2) == 0)
        {
            printf("%i ", nombre);
            i = i + 1;
        }
    }
}

void exercice4_v1()
{
    int nombre = get_int("entrer un nombre : ");
    int s = nombre;
    for (int i = 0; i < nombre; i++)
    {
        s = s + i;
    }
    printf("la somme est : %i \n", s);
}

void exercice4_v2()
{
    int nombre = get_int("entrer un nombre : ");
    int s = nombre;
    for (int i = 1; i < nombre; i++)
    {
        s = s * i;
    }
    printf("le produit est : %i \n", s);
}

void exercice5()
{
    int n;
    do
    {
        n = get_int("entrer un entier :  \n");
    }
    while (n <= 0);

    int s = 1;

    if (n > 0)
    {
        for (int i = 2; i < n; i++)
        {
            s = s * i;
        }
    }
    else
    {
        s = 1;
    }

    printf("nombre! = %i", s);
}

void exercice6_v1()
{
    int n = get_int("entrer un entier n : ");
    int num = get_int("entrer un nombre : ");
    int min = num;
    for (int i = 0; i < (n - 1); i++)
    {
        int nombre = get_int("entrer un nombre : ");
        if (nombre < min)
        {
            min = nombre;
        }
    }
    printf("\nle min de cette serie est : %i \n", min);
}

void exercice6_v2()
{
    int n = get_int("entrer un entier n : ");
    int num = get_int("entrer un nombre : ");
    int index = 0;
    int min = num;
    for (int i = 0; i < (n - 1); i++)
    {
        int nombre = get_int("entrer un nombre : ");
        if (nombre < min)
        {
            min = nombre;
            index = i + 1;
        }
    }
    printf("\nle min de cette serie est : %i  d'index %i  \n", min, index);
}

void exercice6_v3()
{
    int index = 0;
    int num = get_int("entrer un nombre : ");
    int min = num;
    int nombre;
    do
    {
        nombre = get_int("entrer un nombre : ");
        index = index + 1;
        if (nombre > 0)
        {
            if (nombre < min)
            {
                min = nombre;
            }
        }
        else if (nombre == 0)
        {
            break;
        }
    }
    while (nombre >= 0);
    printf("\nle min de cette serie est : %i  d'index %i  \n", min, index);
}

void exercice7()
{
    int nombre = get_int("entrer un nombre : ");
    int index = 1;
    int diviseur = 0;
    while(index < (nombre/2))
    {
        if((nombre % index) == 0)
        {
            index = index + 1;
            diviseur = diviseur + 1;
        }
        else
        {
            index = index + 1;
        }
    }
    if(diviseur != 0)
    {
        printf("le nombre %i n'est pas premier \n" , nombre);
    }
    else
    {
        printf("le nombre %i est premier \n" , nombre);
    }

}

void exercice8_v1()
{
    int code ;
    do
    {
        code = get_int("entrer un code pine :  ");
    }
    while(code<1000 || code>9999);
    printf(" votre code est : %i ", code);
}



int main(void)
{
    // exercice2();
     exercice3_v1();
    // exercice3_v2();
    // exercice4_v1();
    // exercice4_v2();
    // exercice5();
    // exercice6_v1();
    // exercice6_v2();
    // exercice6_v3();
    // exercice7();
    // exercice8_v1();
}