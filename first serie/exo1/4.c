#include <stdio.h>
int power(int number,int pow);
int main(void)
{
    int c,d;
    printf("enter the number that u wante\n");
    scanf("%d",&c);
    if (d == 0 || d < 0)
    {
        return 1 ;
    }
    printf("now the power \n");
    scanf("%d",&d);
    int result = power(c,d);
    printf("you r number in the %dth power is ----------> %d\n",d,result);
}
int power(int number, int pow)
{
    int s = 1 ;
    for(int i =0; i < pow ;i++)
    {
        s *= number ;
    }
    return s;
}