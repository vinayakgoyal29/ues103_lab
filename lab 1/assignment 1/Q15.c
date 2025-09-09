#include <stdio.h>

int main()
{
    int sal,gs;
    printf("enter basic salary =");
    scanf("%d",&sal);
    gs=sal+(sal*10/100)+(sal*12/100);
    printf("gross salary =%d\n",gs);
    
}

