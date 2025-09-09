#include <stdio.h>
#include <math.h>
int main()
{
    float num,n,root;
    printf("enter number =");
    scanf("%f",&num);
    printf("enter the root(n)=");
    scanf("%f",&n);
    root=pow(num,1.0/n);
    printf("the %fth root of %f number is = %f\n",n,num,root);
}
