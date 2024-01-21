#include <stdio.h>
#include <stdlib.h>
#define size 20

int main(){
    int tab[size];
    int taille;

    do{
        puts("Donnez la taille du tableau : ");
        scanf("%d", &taille);
    }while(taille < 0 || taille > size);

    puts("Entrez les composants du tableaux :\n");
    for(int i = 0; i < taille; i++){
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    puts("\nLe tableau entrer est :\n");
    for(int i = 0; i < taille; i++){
        printf("%d | ", tab[i]);
    }

    puts("\nL'indice des zéro présent dans le tableau : \n");
    for(int i = 0; i < taille; i++){
        if(tab[i] == 0){
            printf("%d |", i+1);
        }
    }

    return 0;
}
