#include <stdio.h>
void simpleswap(char *a ,char *b)
{
    char tmp;
    tmp = *a;
    *a = *b ;
    *b = tmp ;
}

int main(void) 
{
    char char1 = 'A';
    char char2 = 'B';
    
    printf("Before swapping: char1 = %c, char2 = %c\n", char1, char2);
    
    simpleswap(&char1, &char2);
    
    printf("After swapping: char1 = %c, char2 = %c\n", char1, char2);
    
    
}