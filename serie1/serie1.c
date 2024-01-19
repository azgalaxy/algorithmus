#include <stdio.h>
#include <math.h>

int get_int(char* title) {
    int value;

    printf(title);
    scanf("%d", value);

    return value;
} 

void puissance(void)
{
    int x = get_int("Donner la valeur de X: ");
    int y = get_int("Donner la valeur de Y: ");
 
    double p = pow(x,y);
    printf("1/%f \n",p);

    printf("La pusissance est : %f \n",p);
}

void moyenne(void)
{
    int note1 = get_int("Donner la valeur de note1: ");
    int note2 = get_int("Donner la valeur de note2: ");
    int note3 = get_int("Donner la valeur de note3: ");

    int coffecion1 = get_int("Donner la valeur de coffecion1: ");
    int coffecion2 = get_int("Donner la valeur de coffecion2: ");
    int coffecion3 = get_int("Donner la valeur de coffecion3: ");

    float moyenne = ((note1 * coffecion1) + (note2 * coffecion2) + (note3 * coffecion3))/ (coffecion3+coffecion2+coffecion1);

    printf("Ton moyenne est : %f \n",moyenne);

}

void swap(void)
{
    int a = get_int("Enter a : ");
    int b = get_int("Enter b : ");
    int temp;

    printf("%i et %i avant \n",a,b);
    temp = a;
    a = b;
    b = temp;

    printf("%i et %i apres \n",a,b);
}

void swap2(void)
{
    int a = get_int("Enter a : ");
    int b = get_int("Enter b : ");

    printf("%i et %i avant \n",a,b);

    a = (a + b);
    b = (a-b);
    a = (a-b);
    printf("%i et %i apres \n",a,b);

}

int main(void)
{
    puissance();
   // moyenne();
  // swap();
  //swap2();
}

