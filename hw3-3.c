#include <stdio.h>
#include <stdlib.h>

int main()
{
    int onum1,num1, digit1, sum1 ;
    int onum2,num2, digit2, sum2 ;
    scanf("%d %d", &num1, &num2);
    onum1=num1;
    onum2=num2;
    for (;num1>0;num1/=10)
    {
    digit1 = num1 % 10;
    sum1 += digit1;
    }
    for (;num2>0;num2/=10)
    {
    digit2 = num2 % 10;
    sum2 += digit2;
    }
    if (sum1<sum2)
    printf ("%d",onum1);

    else
    printf ("%d",onum2);
}
