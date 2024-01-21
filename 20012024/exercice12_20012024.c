#include <stdio.h>
#include <cs50.h>

int main()
{
    int size;
    do
    {
        size = get_int("entrez un la taille de votre tableau : ");
    }
    while (size < 0);

    int numbers[size];

    for(int i = 0; i < size; i++)
    {
        numbers[i] = get_int("entrez un element de votre tableau : ");
    }

    //traitement
    printf("les indices des elements 0 sont : ");
    for(int i = 0; i < size; i++)
    {
        if(numbers[i] == 0)
        {
            printf("%d ", i);
        }
    }
}
