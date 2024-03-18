#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

const int Binary_Conversion = 1;
const int Decimal_Conversion = 2;
const int Octal_Conversion = 3;
const int Hexadecimal_Conversion = 4;
const int Exit_the_Program = 5;

// Affichage du menu
void affichage_menu()
{
    printf("------------------------------------- \n");
    printf(" Welcome to Number System Converter :  \n");
    printf("------------------------------------- \n\n");
    printf("  Select Conversion Type : \n");
    printf("   1. Binary Conversion \n");
    printf("   2. Decimal Conversion \n");
    printf("   3. Octal Conversion \n");
    printf("   4. Hexadecimal Conversion \n");
    printf("   5. Exit the Program \n\n");
}

// Affichage des résultats
void affichage_resultats()
{
    printf("------------------------------------- \n");
    printf("         Conversion Results :         \n");
    printf("------------------------------------- \n");
}

// Transformation de la chaîne en liste d'entiers (from internet)
void transform_String_To_List(char file_numbers[], int list_numbers[], int *num_elements)
{
    *num_elements = 0;
    char *token = strtok(file_numbers, ",");
    while (token != NULL && *num_elements < MAX_SIZE)
    {
        list_numbers[*num_elements] = atoi(token);
        (*num_elements)++;
        token = strtok(NULL, ",");
    }
}

// Transformation de la chaîne en liste de chaînes de caractères (from internet)
void transform_String_To_List_hex(char file_numbers[], char list_numbers_hex[][MAX_SIZE], int *num_elements)
{
    *num_elements = 0;

    // Open the file
    FILE *fptr = fopen(file_numbers, "r");
    if (fptr == NULL)
    {
        printf("Error opening the file.\n");
        return;
    }

    char hex_number[MAX_SIZE];

    // Read hexadecimal numbers from the file until EOF
    while (fscanf(fptr, "%s", hex_number) == 1 && *num_elements < MAX_SIZE)
    {
        // Check if the scanned string is a valid hexadecimal number
        int is_hex = 1;
        for (int i = 0; i < strlen(hex_number); i++)
        {
            if (!isxdigit(hex_number[i]))
            {
                is_hex = 0;
                break;
            }
        }

        if (is_hex)
        {
            strcpy(list_numbers_hex[*num_elements], hex_number);
            (*num_elements)++;
        }
        else
        {
            printf("Invalid hexadecimal number: %s\n", hex_number);
        }
    }

    // Close the file
    fclose(fptr);
}



// Conversion de décimal en binaire
void decimale_to_binary(int number)
{
    if (number == 0)
    {
        printf("Le nombre binaire correspondant est : 0\n");
        return;
    }
    int taille = log2(number) + 1;
    int *nombre_binaire = (int *) malloc(taille * sizeof(int));
    int i = 0;
    while (number > 0)
    {
        nombre_binaire[i++] = number % 2;
        number = number / 2;
    }
    printf("Le nombre binaire correspondant est : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", nombre_binaire[j]);
    }
    printf("\n");
    free(nombre_binaire);
}

// Conversion de décimal en hexadécimal
void decimal_to_hexadecimal(int number)
{
    char hex_chars[] = "0123456789ABCDEF";
    char hexadecimal[MAX_SIZE];
    int i = 0;
    while (number > 0)
    {
        int remainder = number % 16;
        hexadecimal[i++] = hex_chars[remainder];
        number /= 16;
    }
    printf("Hexadecimal representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

// Conversion de décimal en octal
void decimal_to_octal(int number)
{
    int octal_num[MAX_SIZE], i = 0;
    while (number != 0)
    {
        octal_num[i] = number % 8;
        number /= 8;
        i++;
    }
    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal_num[j]);
    }
    printf("\n");
}

// Conversion de binaire en décimal
void binary_to_decimal(int number)
{
    char binary_number[MAX_SIZE];
    sprintf(binary_number, "%d", number);
    int decimal_number = 0, length = strlen(binary_number);
    for (int i = 0; i < length; i++)
    {
        if (!isdigit(binary_number[i]) || (binary_number[i] != '0' && binary_number[i] != '1'))
        {
            printf("Le nombre n'est pas binaire !\n");
            return;
        }
        else
        {
            decimal_number += (binary_number[i] - '0') * pow(2, length - i - 1);
        }
    }
    printf("Le nombre décimal correspondant est : %d\n", decimal_number);
}

// Conversion de binaire en octal
void binary_to_octal(int number)
{
    int octal_number = 0, decimal_number = 0, i = 0;
    while (number != 0)
    {
        decimal_number += (number % 10) * (1 << i);
        ++i;
        number /= 10;
    }
    i = 1;
    while (decimal_number != 0)
    {
        octal_number += (decimal_number % 8) * i;
        decimal_number /= 8;
        i *= 10;
    }
    printf("La conversion du nombre binaire en octale est : %d\n", octal_number);
}

// Conversion de binaire en hexadécimal
void Binary_to_Hexadecimal(int number)
{
    int binary_num, hexa_number = 0, i = 1, remainder;
    binary_num = number;
    while (binary_num != 0)
    {
        remainder = binary_num % 10;
        hexa_number = hexa_number + remainder * i;
        i = i * 2;
        binary_num = binary_num / 10;
    }
    printf("La conversion du nombre binaire en hexadécimal est : %X\n", hexa_number);
}

// Conversion d'octal en décimal
void Octal_to_Decimal(int Number)
{
    int nombre_decimale = 0;
    char octal_number[MAX_SIZE];
    sprintf(octal_number, "%d", Number);
    int longueur = strlen(octal_number);
    for (int i = 0; i < longueur; i++)
    {
        if (octal_number[i] < '0' || octal_number[i] > '7')
        {
            printf("le nombre entré n'est pas octale !\n");
            return;
        }
    }
    for (int j = longueur - 1; j >= 0; j--)
    {
        nombre_decimale += (octal_number[j] - '0') * pow(8, longueur - j - 1);
    }
    printf("le nombre en decimale est : %d \n", nombre_decimale);
}

// Conversion d'octal en binaire
void octal_to_binary(int number)
{
    char dictionary[8][4] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    int binary_num[MAX_SIZE] = {0};
    int index = 0;
    while (number > 0)
    {
        int digit = number % 10;
        for (int i = 2; i >= 0; i--)
        {
            binary_num[index++] = dictionary[digit][i] - '0';
        }
        number /= 10;
    }
    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary_num[i]);
    }
    printf("\n");
}

// Conversion d'octal en hexadécimal
void Octal_to_hexadecimal(int number)
{
    int decimal_number = 0;
    int hexadecimal_number = 0;
    int base = 1;
    int digit;
    while (number > 0)
    {
        digit = number % 10;
        decimal_number += digit * base;
        number /= 10;
        base *= 8;
    }
    char hexadecimal[50];
    int i = 0;
    while (decimal_number != 0)
    {
        int remainder = decimal_number % 16;
        hexadecimal[i] = (remainder < 10) ? (remainder + '0') : (remainder + 55);
        decimal_number /= 16;
        i++;
    }
    printf("Le nombre hexadécimal équivalent est : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

// Conversion d'hexadécimal en décimal
void hexadecimal_to_decimal(char *number) {
    int decimal_number = 0;
    int length = strlen(number);
    for (int i = 0; i < length; i++) {
        char digit = number[i];
        int value;
        if (isdigit(digit)) {
            value = digit - '0';
        } else {
            if (islower(digit)) {
                digit = toupper(digit);
            }
            value = digit - 'A' + 10;
        }
        decimal_number += value * pow(16, length - i - 1);
    }
    printf("Decimal equivalent: %d\n", decimal_number);
}

// Conversion of hexadecimal to octal
void hexadecimal_to_octal(char *number) {
    int decimal_number = 0;
    int length = strlen(number);
    for (int i = 0; i < length; i++) {
        char digit = number[i];
        int value;
        if (isdigit(digit)) {
            value = digit - '0';
        } else {
            if (islower(digit)) {
                digit = toupper(digit);
            }
            value = digit - 'A' + 10;
        }
        decimal_number += value * pow(16, length - i - 1);
    }
    int octal_number[MAX_SIZE];
    int index = 0;
    while (decimal_number > 0) {
        octal_number[index++] = decimal_number % 8;
        decimal_number /= 8;
    }
    printf("Octal representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal_number[i]);
    }
    printf("\n");
}

// Conversion d'hexadécimal en binaire
void hexadecimal_to_binary(char *number) {
    char binary_representation[MAX_SIZE * 4];
    strcpy(binary_representation, "");
    int length = strlen(number);
    for (int i = 0; i < length; i++) {
        char digit = number[i];
        int value;
        if (isdigit(digit)) {
            value = digit - '0';
        } else {
            if (islower(digit)) {
                digit = toupper(digit);
            }
            value = digit - 'A' + 10;
        }
        switch (value) {
            case 0: strcat(binary_representation, "0000"); break;
            case 1: strcat(binary_representation, "0001"); break;
            case 2: strcat(binary_representation, "0010"); break;
            case 3: strcat(binary_representation, "0011"); break;
            case 4: strcat(binary_representation, "0100"); break;
            case 5: strcat(binary_representation, "0101"); break;
            case 6: strcat(binary_representation, "0110"); break;
            case 7: strcat(binary_representation, "0111"); break;
            case 8: strcat(binary_representation, "1000"); break;
            case 9: strcat(binary_representation, "1001"); break;
            case 10: strcat(binary_representation, "1010"); break;
            case 11: strcat(binary_representation, "1011"); break;
            case 12: strcat(binary_representation, "1100"); break;
            case 13: strcat(binary_representation, "1101"); break;
            case 14: strcat(binary_representation, "1110"); break;
            case 15: strcat(binary_representation, "1111"); break;
            default: break;
        }
    }
    printf("Binary representation: %s\n", binary_representation);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    FILE *fptr;
    fptr = fopen("numbers.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }
    char file_numbers[MAX_SIZE];
    fgets(file_numbers, MAX_SIZE, fptr);
    fclose(fptr);
    if (file_numbers[strlen(file_numbers) - 1] == '\n')
    {
        file_numbers[strlen(file_numbers) - 1] = '\0';
    }
    int numbers_list[MAX_SIZE];
    int taille_tableau;
    transform_String_To_List(file_numbers, numbers_list, &taille_tableau);
    for (int i = 0; i < taille_tableau; i++)
    {
        if (numbers_list[i] != 0)
        {
            printf("%d ", numbers_list[i]);
        }
        else
        {
            break;
        }
    }
    char list_numbers_hex[MAX_SIZE][MAX_SIZE];
    int nb_elements_hex;
    transform_String_To_List_hex(file_numbers, list_numbers_hex, &nb_elements_hex);
    affichage_menu();
    int choix;
    do
    {
        printf("Entrez votre choix : \n");
        scanf("%d", &choix);
    }
    while (choix < 1 || choix > 5);
    for (int i = 0; i < taille_tableau; i++)
    {
        switch (choix)
        {
            case Binary_Conversion:
                printf("Le nombre est : %d\n", numbers_list[i]);
                affichage_resultats();
                binary_to_decimal(numbers_list[i]);
                Binary_to_Hexadecimal(numbers_list[i]);
                binary_to_octal(numbers_list[i]);
                printf("\n");
                break;
            case Decimal_Conversion:
                printf("Le nombre est : %d\n", numbers_list[i]);
                affichage_resultats();
                decimale_to_binary(numbers_list[i]);
                decimal_to_octal(numbers_list[i]);
                decimal_to_hexadecimal(numbers_list[i]);
                printf("\n");
                break;
            case Octal_Conversion:
                printf("Le nombre est : %d\n", numbers_list[i]);
                affichage_resultats();
                Octal_to_Decimal(numbers_list[i]);
                Octal_to_hexadecimal(numbers_list[i]);
                octal_to_binary(numbers_list[i]);
                printf("\n");
                break;
            case Hexadecimal_Conversion:
                printf("Le nombre est : %s\n", list_numbers_hex[i]);
                affichage_resultats();
                printf("\n");
                hexadecimal_to_binary(list_numbers_hex[i]);
                hexadecimal_to_octal(list_numbers_hex[i]);
                hexadecimal_to_decimal(list_numbers_hex[i]);
                printf("\n");
                break;
            case Exit_the_Program:
                return 0;
            default:
                printf("Choix invalide !\n");
        }
    }
}
