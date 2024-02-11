
#include <stdio.h>
void simpleswap(char *a ,char *b)
{
    char tmp;
    tmp = *a;
    *a = *b ;
    *b = tmp ;
};

void reverse(char *string) 
{
    int length = 0;
    while (string[length] != '\0') 
    {
        length++;
    }
    int start = 0;
    int end = length - 1;
    while (start < end) 
    {
        simpleswap(&string[start], &string[end]);
        start++;
        end--;
    }
}
int main(void) 
{
    char str[] = "Hello";
    printf("Before reversing: %s\n", str);
    reverse(str);
    printf("After reversing: %s\n", str);
    
}