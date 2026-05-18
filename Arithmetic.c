#include <stdio.h>

int add(int a, int b)
{
    return a += b;
}

int multiply(int a, int b)
{
    return a *= b;
}

int subtract(int a, int b)
{
    return a -= b;
}

float divide(int a, int b)
{
    float x = (float)a;
    float y = (float)b;
    return x /= y;
}

int main()
{
    int num1, num2;
    int addition, subtraction, multiplication;
    float division;

    printf("Enter two integer number: ");
    scanf("%d%d", &num1, &num2);
    addition = add(num1, num2);
    multiplication = multiply(num1, num2);
    subtraction = subtract(num1, num2);
    division = divide(num1, num2);

    printf("Addition of %d and %d: %d\n", num1, num2, addition);
    printf("Subraction of %d and %d: %d\n", num1, num2, subtraction);
    printf("Multiplication of %d and %d: %d\n", num1, num2, multiplication);
    printf("Division of %d and %d: %.2f\n", num1, num2, division);

    return 0;
}
