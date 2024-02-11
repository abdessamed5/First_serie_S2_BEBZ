#include <stdio.h>

#define MAX_BINARY_LENGTH 33 

void DecToBin(int num, char *binaryString) 
{
    int i = 0;
    if (num == 0) 
    {
        binaryString[i++] = '0';
        binaryString[i] = '\0';
        return;
    }
    while (num > 0) 
    {
        int remainder = num % 2;
        binaryString[i++] = (remainder == 0) ? '0' : '1';
        num /= 2;
    }
    int j;
    for (j = 0; j < i / 2; j++) 
    {
        char temp = binaryString[j];
        binaryString[j] = binaryString[i - j - 1];
        binaryString[i - j - 1] = temp;
    }
    binaryString[i] = '\0';
}

int main(void) 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    char binaryString[MAX_BINARY_LENGTH];
    DecToBin(num, binaryString);
    printf("Binary representation of %d is: %s\n", num, binaryString);

}

