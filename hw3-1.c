#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,num;
    scanf("%d",&n);

    for (a=2;a<n;a++)
    {
        if((n%a)==0)
        {
        num=0;
        }
    }
    if (num)
    {
    printf ("yes");
    }
    else
    {
    printf ("no");
    }
}
