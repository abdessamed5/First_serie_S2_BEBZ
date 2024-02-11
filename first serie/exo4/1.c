#include<stdio.h>
#include<stdlib.h>

void swap(char *a,char *b)
{
    int tmp;
    tmp = *a;
    *a = *b ;
    *b = tmp ;
};
int len(int number) 
{
    int length = 0;
    while (number != 0) 
    {
        number /= 10;
        length++;
    }
    return length;
}
void miror(int a)
{
    int length = len(a);
    char *str = (char *)malloc(length + 1);
    if (str == NULL) 
    {
        printf("Memory allocation failed\n");
    }
    sprintf(str, "%d", a);
    for (int i =0 ;i<(length / 2);i++)
    {
        swap(&str[i], &str[length - i - 1]);
    }
    printf("Mirrored number: %s\n", str); 
    free(str);
}
int main(void) 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    miror(number);
}