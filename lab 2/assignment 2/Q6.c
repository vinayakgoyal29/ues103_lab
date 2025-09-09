#include <stdio.h>

int main()
{
    int num = 10;

    int leftShifted = num << 2;
                               
    printf("Original number: %d (Binary: %d)\n", num, num);
    printf("Left shifted by 2: %d (Binary: %d)\n", leftShifted, leftShifted);

    int rightShifted = num >> 1;
                               
    printf("Right shifted by 1: %d (Binary: %d)\n", rightShifted, rightShifted);

    return 0;
}
