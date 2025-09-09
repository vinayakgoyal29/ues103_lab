#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter a and b =");
    scanf("%d%d",&a,&b);
    printf("\ninitial value of a =%d\n",a);
    printf("initial value of b =%d\n",b);
    c=a;
    a=b;
    b=c;
    printf("now the value of a =%d and b=%d\n",a,b);
    return 0;
}

