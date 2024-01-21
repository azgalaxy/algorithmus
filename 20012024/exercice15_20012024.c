#include <stdio.h>

int iHeures, iMinutes, iSecondes;

void affiche_heure()
{
    printf("Il est %d heure(s) %d minute(s) %d seconde(s)\n", iHeures, iMinutes, iSecondes);
}

void saisir_heure(int iH, int iM, int iS)
{
    iHeures = iH;
    iMinutes = iM;
    iSecondes = iS;
}

void tick()
{
    iSecondes++;
    if (iSecondes == 60)
    {
        iSecondes = 0;
        iMinutes++;
        if (iMinutes == 60)
        {
            iMinutes = 0;
            iHeures++;
            if (iHeures == 24)
            {
                iHeures = 0;
            }
        }
    }
}

int main()
{

    saisir_heure(10, 45, 30);
    affiche_heure();
    tick();
    affiche_heure();
}
