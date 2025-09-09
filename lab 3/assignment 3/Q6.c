//To check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly.
#include <stdio.h>
int main()
{
    int n;
    printf("enter a no. =");
    scanf("%d",&n);
    if(n%5==0 && n%8==0)
        printf("the no. is divisible by both 5 and 8\n");
    else if(n%5==0 && n%8!=0)
        printf("the no. is divisible only with 5 not 8\n");
    else if(n%5!=0 && n%8==0)
        printf("the no. is divisible only with 8 not 5\n");
    else printf("the no. is not divisible by either\n");
    return 0;
}
