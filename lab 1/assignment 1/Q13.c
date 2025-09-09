#include <stdio.h>

int main()
{
    int p,r,t,s;
    printf("enter principle amount=");
    scanf("%d",&p);
    printf("enter rate of interest=");
    scanf("%d",&r);
    printf("enter time period=");
    scanf("%d",&t);
    s=(p*r*t)/100;
    printf("simple interest =%d\n",s);
    
}

