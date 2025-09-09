#include <stdio.h>
int main()
{
    char c;
    printf("enter any character = ");
    scanf("%c",&c);
    if(c >= 'A' && c <= 'z')
    {printf("entered character is a capital letter\n");}
        else if(c >= 'a' && c <= 'z')
        {printf("entered character is a small letter\n");}
    else if( c>= '0' && c <= '9')
    {printf("entered character is a digit\n");}
    else printf("you entered a special character\n");
        return 0;
}
