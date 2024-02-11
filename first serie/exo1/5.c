#include<stdio.h>

int even(int numb)
{
    char string[20];
    sprintf(string,"%d",numb);
    int counter = 0;
    for (int i=0 ; string[i] != '\0' ; i++)
    {
        if ( string[i] % 2 == 0 )
        {
            counter ++;
        }
    }
    return counter ;

};

int main(void)
{
    int numb;
    printf("enter your number \n");
    scanf("%d",&numb);
    int c = even(numb);
    printf("in %d there are -------> %d even number",numb,c);

}
