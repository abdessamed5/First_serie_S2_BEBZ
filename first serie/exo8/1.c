#include <stdio.h>

int productOfNonZeroDigits(int num) 
{
    int product = 1;
    while (num != 0) {
        int digit = num % 10;
        if (digit != 0) {
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

int isProdigious(int num) 
{
    int product = productOfNonZeroDigits(num);
    if (product != 0 && num % product == 0) 
    {
        return 1;
    } else {
        return 0; 
    }
}

int main(void) 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isProdigious(num)) 
    {
        printf("%d is prodigious.\n", num);
    } else 
    {
        printf("%d is not prodigious.\n", num);
    }
}

