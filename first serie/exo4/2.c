#include <stdio.h>

void IntFrac(double x, int *integerPart, double *fractionalPart) 
{
    *integerPart = (int)x;
    *fractionalPart = x - *integerPart;
}

int main(void) 
{
    double number = 235.2601;
    int integerPart;
    double fractionalPart;

    IntFrac(number, &integerPart, &fractionalPart);
    printf("Number: %f\n", number);
    printf("Integer part: %d\n", integerPart);
    printf("Fractional part: %f\n", fractionalPart);

}
