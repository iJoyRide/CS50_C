#include <stdio.h>

int main()
{

    int int_number, x, y;
    float answer;

    printf("Please enter an integer: ");
    scanf("%d", &int_number);

    printf("Please enter number 1: ");
    scanf("%d", &x);

    printf("Please enter number 2: ");
    scanf("%d", &y);

    if (y != 0)
    {
        answer = (float)x / y; // Casting to float for floating-point division
        printf("Answer: %f\n", answer);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
