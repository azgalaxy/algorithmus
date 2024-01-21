#include <stdio.h>
#include <stdlib.h>

int iHeure;
int iMinute;
int iSeconde;

void Saisir_Heure();
void tick();
void Afficher_Heure();

int main(){
    Saisir_Heure();
    tick();
    Afficher_Heure();
    return 0;
}

void Saisir_Heure(){
    do{
        puts("Donnez l'Heure : ");
        scanf("%d", &iHeure);
        puts("Donnez Minute : ");
        scanf("%d", &iMinute);
        puts("Donnez Seconde : ");
        scanf("%d", &iSeconde);
    }while(iHeure < 0 || iMinute < 0 || iMinute > 60 || iSeconde < 0 || iSeconde > 60);
}

void tick(){
    iSeconde += 1;
    if(iSeconde > 60){
        iSeconde = 0;
        iMinute += 1;
        if(iMinute > 60){
            iMinute = 0;
            iHeure += 1;
            if(iHeure > 24){
                iHeure = 0;
            }
        }
    }
}

void Afficher_Heure(){
    printf("Il est %d Heure(s) %d Minute(s) %d Seconde(s)", iHeure, iMinute, iSecond);
}

