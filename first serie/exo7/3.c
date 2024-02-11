
#include <stdio.h>

char XOR(char a, char b) 
{
    return (a == b) ? '0' : '1';
}

int main(void) 
{
    char a, b;
    printf("Enter two binary characters (0 or 1): ");
    scanf(" %c %c", &a, &b);
    char result = XOR(a, b);
    printf("XOR between %c and %c is: %c\n", a, b, result);

}
