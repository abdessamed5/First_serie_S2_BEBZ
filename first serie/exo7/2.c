#include <stdio.h>

int BinToDec(char *binaryString) 
{
    int decimal = 0;
    int i = 0;
    while (binaryString[i] != '\0') 
    {
        decimal *= 2;
        decimal += binaryString[i] - '0'; 
        i++;
    }

    return decimal;
}

int main(void) 
{
    char binaryString[33]; 
    printf("Enter a binary string: ");
    scanf("%s", binaryString);
    int decimal = BinToDec(binaryString);
    printf("Decimal equivalent: %d\n", decimal);

}

