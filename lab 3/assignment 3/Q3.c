#include <stdio.h>

int main()
{
    float A,B,sum,sub,multi,divide;
    char choice;
    printf("enter choice(+,-,*,/)");
    scanf("%c",&choice);
    switch(choice)
    {
        case '+':
        {
            printf("enter 2 no.=");
            scanf("%f%f",&A,&B);
            sum = A+B;
            printf("addition=%f\n",sum);
        }
        break;
        
        case '-':
        {
            printf("enter 2 no.=");
            scanf("%f%f",&A,&B);
            sub = A-B;
            printf("subtraction=%f\n",sub);
        }
        break;
        
        case '*':
        {
            printf("enter 2 no.=");
            scanf("%f%f",&A,&B);
            multi = A*B;
            printf("multiplication=%f\n",multi);
        }
        break;
        
        case '/':
        {
            printf("enter 2 no.=");
            scanf("%f%f",&A,&B);
            divide = A/B;
            printf("division=%f\n",divide);
        }
        break;
        default:printf("not an operator\n");
    }
    
    
}

