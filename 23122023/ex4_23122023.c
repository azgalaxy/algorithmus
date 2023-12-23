#include <stdio.h>

int main(){
    int taille, T[20];

    do{
        printf("Donnez la taille du tableau : ");
        scanf("%d", &taille);
    }while(taille < 0 || taille > 20);

    printf("Entrez les valeurs de T ici : \n");
    for(int i = 0; i < taille; i++){
        do{
            printf("T[%d] = ", i);
            scanf("%d", &T[i]);
        }while(T[i] == 0);
    }

    printf("\nLe tableau T : \n");
    for(int i = 0; i < taille; i++){
        printf("%d | ", T[i]);
    }

    printf("\nLe nouveau tableau : \n");
    for(int i = taille-1; i >= 0; i--){
        printf("%d | ", T[i]);
    }

    return 0;
}
