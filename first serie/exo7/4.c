#include <stdio.h>

void BinToGray(char *binaryString, char *grayString) 
{
    int i;
    grayString[0] = binaryString[0];
    for (i = 1; binaryString[i] != '\0'; i++) 
    {
        grayString[i] = (binaryString[i] == binaryString[i - 1]) ? '0' : '1';
    }
    grayString[i] = '\0';
}

int main(void) 
{
    char binaryString[33]; 
    char grayString[33];   
    printf("Enter a binary string: ");
    scanf("%s", binaryString);
    BinToGray(binaryString, grayString);
    printf("Gray code equivalent: %s\n", grayString);
}
