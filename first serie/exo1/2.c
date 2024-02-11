#include<stdio.h>

int sum(int number)
{
    int s =0 ;
    for (int i = 0;i<number;i++)
    {
        s = s + i;
    }
    return s;
};
int main(void)
{
    int l;
    printf("enter the number that you you want to stop to\n");
    scanf("%d",&l);
    printf("\n");
    printf("\n");
    printf("the factorial of %d is -------------> %d \n",l,sum(l));
}