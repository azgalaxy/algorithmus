#include <stdio.h>
#include <stdlib.h>
#define size 20

void tri_tableau(int tab[size], int taille);

int main(){
    int tab[size];
    int taille;

    do{
        puts("Donnez la taille du tableau : ");
        scanf("%d", &taille);
    }while(taille < 0 || taille > size);

    puts("Entrez les composants du tableaux :\n");
    for(int i = 0; i < size; i++){
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    puts("\nLe tableau saisie :\n");
    for(int i = 0; i < size; i++){
        printf("%d | ", tab[i]);
    }

    tri_tableau(tab, taille);

    return 0;
}

void tri_tableau(int tab[size], int taille){
    int temp;

    for(int i = 0; i < taille; i++){
        for(int j = 0; j < taille; j++){
            if(tab[i] > tab[j]){
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d | ", tab[i]);
    }
}
