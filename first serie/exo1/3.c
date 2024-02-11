#include <stdio.h>

void max(int A,int B)
{
    if (A>B)
    {
        printf("the max is %d",A);
    }
    else 
    {
        printf("the max is %d",B);
    }
};
int main(void)
{
    int A,B;
    printf("enter the value of A\n");
    scanf("%d",&A);
    printf("enter the value of B\n");
    scanf("%d",&B);
    printf("betwene %d and %d  ---------->",A,B);
    max(A,B);
}