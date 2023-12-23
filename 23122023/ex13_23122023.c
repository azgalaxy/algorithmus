#include <stdio.h>
#include <string.h>
#define Max_Words 10
#define Max_length 10

int main(){
    int taille;
    char phrase[Max_Words][Max_length];

    do{
        printf("Donnez le nombre des mots : ");
        scanf("%d", &taille);
    }while(taille < 0 || taille > Max_Words);

    printf("Entrez les mots ici : \n");
    for(int i = 0; i < taille; i++){
        printf("phrase[%d] = ", i);
        scanf("%s", phrase[i]);
    }

    printf("\nLa phrase enterez : \n");
    for(int i = 0; i < taille; i++){
        printf("%s ", phrase[i]);
    }
    printf(".");

    printf("\nLa phrase inversée est : \n");
    for(int i = (taille-1); i >= 0; i--){
        printf("%s ", phrase[i]);
    }
    printf(".");
    printf("\n");

    return 0;

}
