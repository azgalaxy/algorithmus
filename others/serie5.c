#include <cs50.h>
#include <stdio.h>

struct student
{
    int numéro;
    string nom;
    string prénom;
    int moyenne_bac;
};

int min(int a, int b)
{
    int min = a;
    if (b < min)
    {
        min = b;
    }
    return min;
}

int max(int a, int b)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    return max;
}

int max_4(int a, int b, int c, int d)
{
    int table[4];

    table[0] = a;
    table[1] = b;
    table[2] = c;
    table[3] = d;

    int max = table[0];

    for (int i = 0; i < 4; i++)
    {
        if (table[i] > max)
        {
            max = table[i];
        }
    }
    return max;
}

void tri(struct student T[] , int size)
{
    int i, j, c;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
            if (T[i] > T[j])
            {
                c = T[i];
                T[i] = T[j];
                T[j] = c;
            }
    }
}

void student()
{
    int size = get_int("entrer un entier : ");
    struct student Informations[size];

    for (int i = 0 ; i < size ; i++)
    {
        Informations[i].numéro = get_int("entrer votre numéro : \n");
        Informations[i].nom = get_string("entrer votre nom : \n");
        Informations[i].prénom = get_string("entrer votre prénom :  \n");
        Informations[i].moyenne_bac = get_int("entrer votre moyenne :  \n");
    }

    printf("\nStudent Informations List:");

        for (int i = 0; i < size; i++)
    {
        printf("\nvotre numéro: %d\t Name:%s \t prénom :%s\t moyenne de bac :%d\n", Informations[i].numéro,
                Informations[i].nom,  Informations[i].prénom ,  Informations[i].moyenne_bac);
    }
    tri(Informations.moyenne_bac ,size);

}

int min_4(int a, int b, int c, int d)
{
    int table[4];

    table[0] = a;
    table[1] = b;
    table[2] = c;
    table[3] = d;

    int min = table[0];

    for (int i = 0; i < 4; i++)
    {
        if (table[i] < min)
        {
            min = table[i];
        }
    }
    return min;
}

int main(void)
{
    /*
    int a = get_int("entrer un entier a : ");
    int b = get_int("entrer un entier b : ");
    int c = get_int("entrer un entier c : ");
    int d = get_int("entrer un entier d : ");

    // int minimum = min(a, b);
    // int maximum = max(a, b);
    int maximum4 = max_4(a, b, c, d);
    int minimum4 = min_4(a, b, c, d);
    // printf("le minimum est : %i ", minimum);
    // printf("\nle maximum est : %i ", maximum);
    printf("\nle maximum est : %i ", maximum4);
    printf("\nle maximum est : %i ", minimum4);
    */

   student();
}
