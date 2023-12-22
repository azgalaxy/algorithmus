#include <stdio.h>
#define size 50

int main(){
    int T[size], TPOS[size], TNEG[size];
    int i;
    int taille;

    do{
        printf("Donnez la taille du tableau : ");
        scanf("%d", &taille);
    }while(taille < 0 || taille > size);

    printf("Entrez les valeurs de T ici : \n");
    for(i = 0; i < taille; i++){
        do{
            printf("T[%d] = ", i);
            scanf("%d", &T[i]);
        }while(T[i] == 0);
    }

    printf("\nLe tableau T : \n");
    for(i = 0; i < taille; i++){
        printf("%d | ", T[i]);
    }

    printf("\n");
    int j = 0;
    int k = 0;
    for(i = 0; i < taille; i++){
        if(T[i] > 0){
            TPOS[j] = T[i];
            j += 1;
        }
        else{
            TNEG[k] = T[i];
            k += 1;
        }
    }

    printf("\nLe tableau TPOS : \n");
    for(i = 0; i < j; i++){
        printf("%d | ", TPOS[i]);
    }

    printf("\nLe tableau TNEG : \n");
    for(i = 0; i < k; i++){
        printf("%d | ", TNEG[i]);
    }
    printf("\n");

    return 0;
}
