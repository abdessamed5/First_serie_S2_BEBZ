#include <stdio.h>

void Fexpo(double fractionalPart, int *M, int *n) 
{
    *n = 0;

    while (fractionalPart < 1) 
    {
        fractionalPart *= 10;
        (*n)--;
    }
    *M = (int)fractionalPart;
}

int main() 
{
    double fractionalPart = 0.2601;
    int M, n;
    Fexpo(fractionalPart, &M, &n);

    printf("Fractional part: %f\n", fractionalPart);
    printf("M: %d\n", M);
    printf("n: %d\n", n);

    return 0;
}
