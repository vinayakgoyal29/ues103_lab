#include <stdio.h>
#include <math.h>
int main()
{
    float sqr,lo,si,co,pwr,rad;
    int a=9;
    int b=100;
    int ang=45;
    rad= ang*3.14/180;
    sqr=sqrt(a);
    printf("square root of %d =%f\n",a,sqr);
    lo=log(b);
    printf("logarithm of %d =%f\n",b,lo);
    si=sin(rad);
    printf("sin of %f degrees =%f\n",rad,si);
    co=cos(rad);
    printf("cos of %f degrees =%f\n",rad,co);
    pwr=pow(a,2);
    printf("square of %d =%f\n",a,pwr);
    
    return 0;
}
