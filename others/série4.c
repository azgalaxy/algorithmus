#include <cs50.h>
#include <stdio.h>

struct Rationnel
{
    int dénominateur;
    int numérateur;
};

struct Compte
{
    int numéro;
    string  nom;
    string  prénom;
    string  date;
};


void exercice1()
{
    int Table[10];
    for (int i = 0; i < 10; i++)
    {
        Table[i] = get_int("entrer un nombre : ");
    }
    printf("les nombres impaires sont : ");
    for (int i = 0; i < 10; i++)
    {
        if ((Table[i] % 2) != 0)
        {
            printf(" %i ", Table[i]);
        }
    }
}

void exercice2()
{
    float Table[10];
    int index = 0;
    for (int i = 0; i < 10; i++)
    {
        Table[i] = get_float("entrer un nombre : ");
    }
    float max = Table[0];
    for (int i = 1; i < 10; i++)
    {
        if (Table[i] > max)
        {
            max = Table[i];
            index = i;
        }
    }
    printf("\nle maximum est : %.1f  et de position %i", max, index);
}

void exercice3()
{
    int larg = get_int("entrer la largeur : ");
    int longe = get_int("entrer la longeur  : ");
    int Table[larg][longe];
    int nombre = get_int("entrer le nombre cherché ");
    for (int i = 0; i < larg; i++)
    {
        for (int j = 0; j < longe; j++)
        {
            Table[i][j] = get_int("entrer un nombre  :  ");
        }
    }
    for (int i = 0; i < larg; i++)
    {
        for (int j = 0; j < longe; j++)
        {
            if (Table[i][j] == nombre)
            {
                printf("le nombre cherché est trouvé \n");
            }
            else
            {
                printf("le nombre cherché n'est pas trouvé \n");
            }
        }
    }
}

void exercice4()
{
    int larg = get_int("entrer la largeur : ");
    int longe = get_int("entrer la longeur  : ");
    int Table[larg][longe];
    int nombre = get_int("entrer le nombre que vous chercher :  ");
    int occurance = 0;

    for (int i = 0; i < larg; i++)
    {
        for (int j = 0; j < longe; j++)
        {
            Table[i][j] = get_int("entrer un nombre  :  ");
        }
    }

    for (int i = 0; i < larg; i++)
    {
        for (int j = 0; j < longe; j++)
        {
            if (Table[i][j] == nombre)
            {
                occurance = occurance + 1;
            }
        }
    }
    printf("\nle nombre d'occurance : %i ", occurance);
}

void exercice5()
{
    struct Rationnel a, b;

    float s = 0;
    float p = 1;

    do
    {
        printf("donner le dénominateur et le numérateur : ");
        scanf("%d%d", &a.numérateur, &a.dénominateur);
        printf("donner le dénominateur et le numérateur : ");
        scanf("%d%d", &b.numérateur, &b.dénominateur);
    }
    while (a.dénominateur == 0 || b.dénominateur == 0);

    float fraction1 = a.numérateur / (float) a.dénominateur;
    printf("le nombre a est %f \n", fraction1);

    float fraction2 = b.numérateur / (float) b.dénominateur;
    printf("le nombre b est %f \n", fraction2);

    s = s + fraction1 + fraction2;
    p = p * fraction1 * fraction2;

    printf("la somme est : %f \n", s);
    printf("le produit est : %f \n", p);
}

void exercice6()
{
    int size = get_int("entrer un entier : ");
    struct Compte Informations[size];

    for (int i = 0; i < size; i++)
    {
        printf("\nentrer le numéro de votre code : ");
        scanf("%i ", &Informations[i].numéro);

        Informations[i].nom = get_string("entrer votre nom : \n");
        Informations[i].prénom = get_string("entrer votre prénom :  \n");
        Informations[i].date = get_string("entrer la date de création de votre compte :  \n");
    }

    printf("\nComptes bancaires Informations List:");

    for (int i = 0; i < size; i++)
    {
        printf("\nnuméro de votre compte: %d\t Name:%s \t prénom :%s\t date :%s\n", Informations[i].numéro,
                Informations[i].nom,  Informations[i].prénom ,  Informations[i].date);
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