#include <cs50.h>
#include <stdio.h>
#include <string.h>

// sum digits of a number
int sum_digits(int number)
{
    int result = 0;
    int rest;
    int value = number;

    do
    {
        value = value / 10;
        rest = value % 10;
        result += rest;
    }
    while (value != 0);

    return result;
}

void order_table_by_sum_digits()
{
    int table_size;
    int temp_value;

    // read table size
    do
    {
        table_size = get_int("Entrez un entier n: ");
    }
    while (table_size <= 4 || table_size >= 31);

    int table[table_size];

    // read table
    for (int i = 0; i < table_size; i++)
    {
        table[i] = get_int("Entrez un entier :");
    }

    // selection sort
    int index;
    for (int i = 0; i < table_size; i++)
    {
        index = i;

        for (int j = i + 1; j < table_size; j++)
        {
            if (sum_digits(table[j]) > sum_digits(table[index]))
            {
                index = j;
            }
        }

        temp_value = table[i];
        table[i] = table[index];
        table[index] = temp_value;
    }

    // print table :-)
    printf("le tableau des entiers rangés est :  \n");
    for (int i = 0; i < table_size; i++)
    {
        printf("%d ", table[i]);
    }
    printf("\n");
}

void permutation_nombre()
{
    // declaration des variables
    int number;
    int i, chaine_size;
    int int_number;
    char chaine_nombre[20];
    char chaine_nombre_permuté[20];

    // premiere essai
    number = get_int("entrer un entier : ");
    sprintf(chaine_nombre, "%d", number);
    chaine_size = strlen(chaine_nombre);

    // verification des consditions
    while (chaine_size > 20 || chaine_size == 0)
    {
        number = get_int("entrer un entier :  ");
        sprintf(chaine_nombre, "%d", number);
        chaine_size = strlen(chaine_nombre);
    }

    // traitement
    for (i = 0; i < chaine_size; i++)
    {
        chaine_nombre_permuté[chaine_size - i - 1] = chaine_nombre[i];
    }

    // affichage
    for (i = 0; i < chaine_size; i++)
    {
        printf("%c", chaine_nombre_permuté[i]);
    }

    printf("\n");
}

void anagrammes()
{
    int i, j, size1, size2, verification;
    char *string1;
    char *string2;

    do
    {
        string1 = get_string("Entrer la première chaîne : ");
        string2 = get_string("Entrer la deuxième chaîne : ");

        size1 = strlen(string1);
        size2 = strlen(string2);
    }
    while ((size1 > 20 || size2 > 20) || (size1 == 0 || size2 == 0));

    verification = 0;
    if (size1 != size2)
    {
        printf("Les deux chaînes ne sont pas des anagrammes");
    }
    else
    {
        for (i = 0; i < size1; i++)
        {
            for (j = 0; j < size2; j++)
            {
                if (string1[i] == string2[j])
                {
                    verification = 1;
                    break;
                }
            }
            if (!verification)
            {
                break;
            }
        }
    }

    if (!verification)
    {
        printf("Les deux chaînes ne sont pas des anagrammes \n");
    }
    else
    {
        printf("Les deux chaînes sont des anagrammes  \n");
    }
}

void Codage()
{
    int i, j, size_tableau;
    char tableau1[20];
    char tableau2[20];
    char temp;
    int min;

    do
    {
        printf("Entrez la taille du tableau : ");
        scanf("%d", &size_tableau);
    }
    while (size_tableau < 0 || size_tableau > 20);

    for (i = 0; i < size_tableau; i++)
    {
        do
        {
            printf("Entrez un caractère majuscule : ");
            scanf(" %c", &tableau1[i]);
        }
        while (tableau1[i] < 'A' || tableau1[i] > 'Z');
    }

    for (i = 0; i < size_tableau - 1; i++)
    {
        min = i;

        for (j = i + 1; j < size_tableau; j++)
        {
            if (tableau1[j] < tableau1[min])
            {
                min = j;
            }
        }

        temp = tableau1[i];
        tableau1[i] = tableau1[min];
        tableau1[min] = temp;

        tableau2[i] = tableau1[i];
        tableau1[i] = 'a';
    }

    tableau2[size_tableau - 1] = tableau1[size_tableau - 1];
    tableau1[size_tableau - 1] = 'a';

    printf("Tableau 1 : ");
    for (i = 0; i < size_tableau; i++)
    {
        printf("%c ", tableau1[i]);
    }

    printf("\nTableau 2 : ");
    for (i = 0; i < size_tableau; i++)
    {
        printf("%c ", tableau2[i]);
    }
}

void tri_decroissant()
{
    int i, j, max_index;
    int T[30];
    int V[30];
    int table_size;

    do
    {
        table_size = get_int("entrer la taille du tableau : ");
    }
    while (table_size > 30 || table_size < 5);

    for (i = 0; i < table_size; i++)
    {
        T[i] = get_int("enter cet élément : ");
    }

    for (i = 0; i < table_size; i++)
    {
        max_index = 0;

        for (j = 1; j < table_size; j++)
        {
            if (T[j] > T[max_index])
            {
                max_index = j;
            }
        }

        V[i] = T[max_index];

        T[max_index] = -1;
    }

    printf("Tableau trié par ordre décroissant : \n");
    for (i = 0; i < table_size; i++)
    {
        printf("%d ", V[i]);
    }

    printf("\n");
}

void tri_decroissant_de_moyennes()
{
    int i, j, N;
    char tempName[50];
    float tempMoyenne;
    string T[50];
    float M[50];

    do
    {
        N = get_int("entrez la taille du tableau :  ");
    }
    while (N > 50 || N < 0);

    for (i = 0; i < N; i++)
    {

        T[i] = get_string("entrer le nom de l'éleve %d : ", i + 1);

        M[i] = get_float("Entrez la moyenne de l'élève %d : ", i + 1);
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (M[j] > M[i] || (M[j] == M[i] && strcmp(T[i], T[j]) > 0))
            {

                strcpy(tempName, T[i]);
                strcpy(T[i], T[j]);
                strcpy(T[j], tempName);

                tempMoyenne = M[i];
                M[i] = M[j];
                M[j] = tempMoyenne;
            }
        }
    }

    printf("Noms des élèves et leurs moyennes triées :\n");
    for (i = 0; i < N; i++)
    {
        printf("%s : %.2f\n", T[i], M[i]);
    }
}

void trierEtAfficherChaine()
{
    int i, j;
    char temp[50];
    char ph[50];

    int n = strlen(ph);
    for (i = 0, j = 0; i < n; i++)
    {
        if (!(ph[i] == ' ' && (i == 0 || i == n - 1 || ph[i - 1] == ' ')))
        {
            ph[j++] = ph[i];
        }
    }
    ph[j] = '\0';

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strlen(strtok(ph + i, " ")) < strlen(strtok(ph + j, " ")))
            {
                strcpy(temp, ph + i);
                strcpy(ph + i, ph + j);
                strcpy(ph + j, temp);
            }
        }
    }

    printf("Chaîne triée par ordre décroissant des longueurs des mots : %s\n", ph);
}

void fusionnement_et_affichage()
{
    int N, M;

    do
    {
        printf("Entrez la taille du tableau T (4 < N < 31) : ");
        scanf("%d", &N);
    }
    while (N <= 4 || N >= 31);

    do
    {
        printf("Entrez la taille du tableau V (4 < M < 31) : ");
        scanf("%d", &M);
    }
    while (M <= 4 || M >= 31);

    int T[N], V[M];
    int W[N + M];
    int i = 0, j = 0, k = 0;

    printf("Saisissez les éléments du tableau T (triés) :\n");
    for (i = 0; i < N; i++)
    {
        printf("T[%d] : ", i);
        scanf("%d", &T[i]);
    }

    printf("Saisissez les éléments du tableau V (triés) :\n");
    for (i = 0; i < M; i++)
    {
        printf("V[%d] : ", i);
        scanf("%d", &V[i]);
    }

    while (i < N && j < M)
    {
        if (T[i] <= V[j])
        {
            W[k++] = T[i++];
        }
        else
        {
            W[k++] = V[j++];
        }
    }

    while (i < N)
    {
        W[k++] = T[i++];
    }

    while (j < M)
    {
        W[k++] = V[j++];
    }

    printf("Tableau fusionné W :\n");
    for (i = 0; i < N + M; i++)
    {
        printf("%d ", W[i]);
    }
    printf("\n");
}

int main()
{
    // order_table_by_sum_digits();
    // permutation_nombre();
    // anagrammes();
    // Codage();
    // tri_decroissant();
    // tri_decroissant_de_moyennes();
    // fusionnement_et_affichage()
}
