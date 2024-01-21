#include <stdio.h>

void initialiser_nombre_jours(int iNb_jours[])
{
    for (int i = 1; i <= 12; i++)
    {
        if (i == 2)
            iNb_jours[i] = 28;
        else if ((i % 2 == 0 && i <= 7) || (i % 2 != 0 && i > 7))
            iNb_jours[i] = 30;
        else
            iNb_jours[i] = 31;
    }
}

void imprimer_nombre_jours(int iNb_jours[])
{
    for (int i = 1; i <= 12; i++)
    {
        printf("Mois %d : %d jours\n", i, iNb_jours[i]);
    }
}

int main()
{
    int iNb_jours[13];

    initialiser_nombre_jours(iNb_jours);

    imprimer_nombre_jours(iNb_jours);

}
