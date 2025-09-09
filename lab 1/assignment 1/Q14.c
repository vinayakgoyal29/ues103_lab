#include <stdio.h>
#include <math.h>
int main()
{
    int p,r,t,c,n;
    printf("enter principle amount=");
    scanf("%d",&p);
    printf("enter rate of interest=");
    scanf("%d",&r);
    printf("enter time period=");
    scanf("%d",&t);
    printf("enter the number of times interest applied per time period =");
    scanf("%d",&n);
    c=p* pow((1+(r/n)),n*t);
    printf("compound interest =%d\n",c);
    
}

