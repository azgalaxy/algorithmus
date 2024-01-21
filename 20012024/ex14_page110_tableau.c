#include <stdio.h>
#include <stdlib.h>
#define size 12

void nombre_jours(int i);
void Afficher_iNB(int iNB_jours[12]);

int main(){
    int iNB_jours[12];
    int i;

    do{
        printf("Donnez la valeur de i : ");
        scanf("%d", &i);
    }while(i > 12);

    nombre_jours(i);
    printf("\n");
    Afficher_iNB(iNB_jours);

    return 0;
}

void nombre_jours(int i){
    if(i == 1){
        printf("Le %d er mois comprend 31 jours .", i);
    }
    else if(i == 2){
        printf("Le %d éme mois comprend 28 jours .", i);
    }
    else if((i <= 7 && i % 2 == 0) || (i % 2 != 0 && i > 7)){
        printf("Le %d éme mois comprend 30 jours", i);
    }
    else{
        printf("Le %d éme mois comprend 31 jours .", i);
    }
}

void Afficher_iNB(int iNB_jours[12]){
    int i = 1;

    do{
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
            printf("31 | ");
        }
        else if(i == 4 || i == 6 || i == 9 || i == 11){
            printf("30 | ");
        }
        else{
            printf("2 | ");
        }
        i += 1;
    }while(i < 12);
}
