#include <stdio.h>

int rem(int ke, int mk) 
{
    return ke % mk;
}
int quotient(int ke, int mk) 
{
    return ke / mk;
}
int main(void)
{
    printf("is you want the reminder enter ----------> 1\nelse if you wante the quotient enter -----------------> 2\nelse if you want both enter ---------------> 99\n");
    int c ;
    scanf("%d",&c);
    if (c == 1 )
    {
        int l,v;
        printf("enter your number \n");
        scanf("%i",&l);
        printf("enter  the divisor\n");
        scanf("%i",&c);
        printf("the reminder is %i",rem(l,c));

    }
    else if (c==2)
    {
        int l,v;
        printf("enter your number \n");
        scanf("%i",&l);
        printf("enter  the divisor\n");
        scanf("%i",&c);
        printf("the quotient is %i",quotient(l,c));
    }    
    else if (c==99)
    {
        int l,v;
        printf("enter your number \n");
        scanf("%i",&l);
        printf("enter  the divisor\n");
        scanf("%i",&c);
        printf("the quotient is -----------> %i\n",quotient(l,c));
        printf("the reminder is -----------> %i\n",rem(l,c));
    }
    else
    {
        printf("there is en error");
        return 22;
    }
}
