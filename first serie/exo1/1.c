#include<stdio.h>

int fact(int number)
{
    int s =1 ;
    for (int i = number;i>0;i--)
    {
        s = s * i ;
    }
    return s;
};
int main(void)
{
    int l;
    printf("enter the number that you have \n");
    scanf("%d",&l);
    printf("\n");
    printf("\n");
    int v = fact(l);
    printf("the factorial of %d is -------------> %d \n",l,v);
}