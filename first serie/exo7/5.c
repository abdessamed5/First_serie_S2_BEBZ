#include <stdio.h>

void GrayToBin(char *grayString, char *binaryString) 
{
    int i;
    binaryString[0] = grayString[0];
    for (i = 1; grayString[i] != '\0'; i++) 
    {
        binaryString[i] = (grayString[i] == binaryString[i - 1]) ? '0' : '1';
    }
    binaryString[i] = '\0';
}

int main(void) 
{
    char grayString[33];   
    char binaryString[33]; 
    printf("Enter a Gray code string: ");
    scanf("%s", grayString);
    GrayToBin(grayString, binaryString);
    printf("Binary code equivalent: %s\n", binaryString);
}
