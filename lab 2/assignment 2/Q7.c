#include <stdio.h>

int main()
{
  int a;
  printf("Enter your age =");
  scanf("%d",&a);
  (a>=18)?printf("You can vote\n"):printf("You cannot vote\n");
  return 0;
}
