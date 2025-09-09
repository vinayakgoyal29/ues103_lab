#include <stdio.h>

int main()
{
    int a=10;
    int b=5;
    printf("initialy a=%d and b=%d\n",a,b);
    a+=b;
    printf("after += a=%d\n",a);
    a-=b;
    printf("after -= a=%d\n",a);
    a*=b;
    printf("after *= a=%d\n",a);
    a/=b;
    printf("after /= a=%d\n",a);
    a%=b;
    printf("after %= a=%d\n",a);
    
    return 0;
}
