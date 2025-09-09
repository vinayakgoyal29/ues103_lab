/*A library charges a fine for every book returned late. For the first 5 days the fine is 50
paisa, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return
the book after 30 days your membership will be canceled. WAP to accept no. of days the
member is late to return the book and display the fine or appropriate message*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of days you are late =");
    scanf("%d",&n);
    if(n<=5)
        printf("fine to be paid = 50 paisa\n");
    else if(n>5 && n<=10)
        printf("fine to be paid = 1 rupee\n");
    else if(n>10 && n<30)
        printf("fine to be paid = 5 rupees\n");
    else if(n>30)
        printf("your membership is expierd\n");
    else printf("not applicable\n");
    return 0;
}
