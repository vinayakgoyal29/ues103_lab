#include<stdio.h>
int main()
/*{
    int a,b,c;
    printf("enter 3 nos =");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("a is max\n");
    else if(b>>a&&b>>c)
        printf("b is max\n");
    else printf("c is max\n");
    return 0;
}*/
{
    int a,b,c,max;
    printf("enter 3 nos =");
    scanf("%d %d %d",&a,&b,&c);
    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("maximum of the given three no. is = %d\n",max);
    return 0;
}
