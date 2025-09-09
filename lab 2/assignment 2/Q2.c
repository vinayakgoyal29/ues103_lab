#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,D,b,a,c;
    printf("enter coeficient of x^2 =");
    scanf("%d",&a);
    printf("enter coeficient of x =");
    scanf("%d",&b);
    printf("enter constant term =");
    scanf("%d",&c);
    D=(pow(b,2))-(4*a*c);
    x1=(-b+sqrt(D))/2*a;
    x2=(-b-sqrt(D))/2*a;
    printf("roots of the quadratic equation is = %d and %d\n",x1,x2);
    return 0;
}
