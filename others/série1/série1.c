#include <cs50.h>
#include <math.h>
#include <stdio.h>

int exercice1()
{
    int a = get_int("donner un nombre entier:");
    float r;
    for (int i = -1; i < 4; i++)
    {
        if (i == -1)
        {
            r = pow(a, -1);
            printf("le nombre est %.2f \n", r);
        }
        else if (i == 2 || i == 3)
        {
            r = pow(a, i);
            printf("le nombre est %.2f \n", r);
        }
    }
    return r;
}

int exercice2()
{
    float m1 = get_float("donnez la note dans la matiére1: ");
    float m2 = get_float("donnez la note dans la matiére2: ");
    float m3 = get_float("donnez la note dans la matiére3: ");

    int a = get_int("\ndonnez 1 ou 2 :");

    if (a == 1)
    {
        float moyenne = (m1 + m2 + m3) / 3.f;
        printf("la moyenne = %.2f :\n", moyenne);
    }
    else if (a == 2)
    {
        float c1 = get_float("donnez la coef de la matiére1: ");
        float c2 = get_float("donnez la coef de la matiére2: ");
        float c3 = get_float("donnez la coef de la matiére3: ");
        float moyenne = (m1 * c1 + m2 * c2 + m3 * c3) / (c1 + c2 + c3);
        printf("la moyenne = %.2f : \n", moyenne);
    }
    return 1;
}

void exercice4()
{
    int a = get_int(" donner un nombre a : ");
    int b = get_int(" donner un nombre b : ");
    int diffrence;

    if (a > b)
    {
        diffrence = a - b;
        a = a - diffrence;
        b = b + diffrence;

        printf("a = %i \n", a);
        printf("b = %i \n", b);
    }
    else if (a < b)
    {
        diffrence = b - a;
        a = a + diffrence;
        b = b - diffrence;

        printf("a = %i \n", a);
        printf("b = %i \n", b);
    }
}

void exercice3()
{
    int a = get_int(" donner un nombre a : ");
    int b = get_int(" donner un nombre b : ");

    printf("\n");

    printf("a = %i \n", a);
    printf("b = %i \n", b);

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\n");

    printf("a =  %i \n", a);
    printf("b =  %i \n", b);
}

int main(void)
{
    // float r = exercice1();
    float moyenne = exercice2();
    // exercice3();
    // exercice4();
}
