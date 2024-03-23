#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50

int conv_vers_decimal(int base, char *nombre)
{
    int decimal = 0;
    int longueur = strlen(nombre);
    int res;

    if (base > 16 || base < 2)
    {
        printf("La base entrée est erronés.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = longueur - 1; i >= 0; i--)
    {
        if (!isdigit(nombre[i]) && (base > 10 && !isxdigit(nombre[i])))
        {
            printf("Il y'a un caractere erronée dans le nombre entrée qui est %c.\n", nombre[i]);
            return -1;
        }

        res = nombre[i] >= 'A' ? (nombre[i] - 'A' + 10) : (nombre[i] - '0');
        if (res >= base)
        {
            printf("Il y'a un chiffre erronée pour la base %d : %c.\n", base, nombre[i]);
            return -1;
        }

        decimal += res * pow(base, i);
    }

    return decimal;
}

char *conv_du_decimal(int decimal, int base, char *resultat)
{
    int i = 0;
    while (decimal > 0)
    {
        int chiffre = decimal % base;
        resultat[i++] = (chiffre > 9) ? 'A' + (chiffre - 10) : '0' + chiffre;
        decimal /= base;
    }

    resultat[i] = '\0';
    strrev(resultat);

    return resultat;
}

int main()
{
    int choix;
    int decimal;
    int base;
    char nombre[MAX_LENGTH], resultat[MAX_LENGTH];

    do
    {
        printf("\n*****Menu*****:\n");
        printf("1. Du décimal vers binaire, octal et hexadécimal\n");
        printf("2. Du binaire vers décimal, octal et hexadécimal\n");
        printf("3. Du octal vers binaire, décimal et hexadécimal\n");
        printf("4. De l'hexadécimal vers binaire, octal et décimal\n");
        printf("5. Entrer un autre nombre\n");
        printf("6. Sortir du programme\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
            case 1:
                printf("Veuillez saisir un nombre décimal : ");
                scanf("%d", &decimal);

                char *resultat_binaire = conv_du_decimal(decimal, 2, resultat);
                if (resultat_binaire != NULL)
                {
                    printf("Conversion en binaire : %s\n", resultat_binaire);
                    free(resultat_binaire);
                }

                char *resultat_octal = conv_du_decimal(decimal, 8, resultat);
                if (resultat_octal != NULL)
                {
                    printf("Conversion en octal : %s\n", resultat_octal);
                    free(resultat_octal);
                }

                char *resultat_hex = conv_du_decimal(decimal, 16, resultat);
                if (resultat_hex != NULL)
                {
                    printf("Conversion en hexadécimal : %s\n", resultat_hex);
                    free(resultat_hex);
                }

                break;

            case 2:
                printf("Veuillez saisir un nombre binaire : ");
                scanf("%s", nombre);
                base = 2;

                decimal = conv_vers_decimal(base, nombre);
                if (decimal != -1)
                {
                    printf("Conversion en décimal : %d\n", decimal);
                }

                resultat_binaire = conv_du_decimal(decimal, 2, resultat);
                if (resultat_binaire != NULL)
                {
                    printf("Conversion en binaire : %s\n", resultat_binaire);
                    free(resultat_binaire);
                }

                resultat_octal = conv_du_decimal(decimal, 8, resultat);
                if (resultat_octal != NULL)
                {
                    printf("Conversion en octal : %s\n", resultat_octal);
                    free(resultat_octal);
                }

                resultat_hex = conv_du_decimal(decimal, 16, resultat);
                if (resultat_hex != NULL)
                {
                    printf("Conversion en hexadécimal : %s\n", resultat_hex);
                    free(resultat_hex);
                }

                break;

            case 3:
                printf("Veuillez saisir un nombre octal : ");
                scanf("%s", nombre);
                base = 8;

                decimal = conv_vers_decimal(base, nombre);
                if (decimal != -1)
                {
                    printf("Conversion en décimal : %d\n", decimal);
                }

                resultat_binaire = conv_du_decimal(decimal, 2, resultat);
                if (resultat_binaire != NULL)
                {
                    printf("Conversion en binaire : %s\n", resultat_binaire);
                    free(resultat_binaire);
                }

                resultat_octal = conv_du_decimal(decimal, 8, resultat);
                if (resultat_octal != NULL)
                {
                    printf("Conversion en octal : %s\n", resultat_octal);
                    free(resultat_octal);
                }

                resultat_hex = conv_du_decimal(decimal, 16, resultat);
                if (resultat_hex != NULL)
                {
                    printf("Conversion en hexadécimal : %s\n", resultat_hex);
                    free(resultat_hex);
                }

                break;

            case 4:
                printf("Veuillez saisir un nombre hexadécimal : ");
                scanf("%s", nombre);
                base = 16;

                decimal = conv_vers_decimal(base, nombre);
                if (decimal != -1)
                {
                    printf("Conversion en décimal : %d\n", decimal);
                }

                resultat_binaire = conv_du_decimal(decimal, 2, resultat);
                if (resultat_binaire != NULL)
                {
                    printf("Conversion en binaire : %s\n", resultat_binaire);
                    free(resultat_binaire);
                }

                resultat_octal = conv_du_decimal(decimal, 8, resultat);
                if (resultat_octal != NULL)
                {
                    printf("Conversion en octal : %s\n", resultat_octal);
                    free(resultat_octal);
                }

                resultat_hex = conv_du_decimal(decimal, 16, resultat);
                if (resultat_hex != NULL)
                {
                    printf("Conversion en hexadécimal : %s\n", resultat_hex);
                    free(resultat_hex);
                }

                break;

            case 5:
                break;

            case 6:
                printf("Sortie du programme...\n");
                break;

            default:
                printf("Choix invalide. Veuillez entrer un nombre entre 1 et 6.\n");
        }
    }
    while (choix != 6);

    return 0;
}
