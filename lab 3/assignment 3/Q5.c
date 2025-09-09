#include<stdio.h>
int main()
{
    int a;
    printf("enter no. = ");
    scanf("%d",&a);
    if(a%2==0)
        printf("a is even no.\n");
    else
        printf("a is odd no.\n");
    
    if(a>0)
        printf("a is positive no.\n");
    else if(a<0)
        printf("a is negative no.\n");
    else printf("a is 0\n");
    
    (a%2==0)?printf("a is even no.\n"):printf("a is odd no.\n");
    
    (a>0)?printf("a is positive no.\n"):((a<0)?printf("a is negative no.\n"):printf("a is 0\n"));
    return 0;
}

