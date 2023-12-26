#include <stdio.h>
#include <cs50.h>

double Calculer_puissance(double x, int n)
{
    double temp;

    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        temp = Calculer_puissance(x, n / 2);
        return temp * temp;
    }
    else
    {
        temp = Calculer_puissance(x, n / 2);
        return x * temp * temp;
    }
}

int main()
{
    double base, result;
    int exponent;

    base = get_double("Enter the base (x): ");
    exponent = get_double("Enter the exponent (n): ");

    result = Calculer_puissance(base, exponent);
    printf("The result of %.2lf^%d is: %.2lf\n", base, exponent, result);

    return 0;
}
