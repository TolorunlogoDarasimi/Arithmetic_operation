#include <stdio.h>

double add(double a, double b)
{
    return a += b;
}

double multiply(double a, double b)
{
    return a *= b;
}

double subtract(double a, double b)
{
    return a -= b;
}

double divide(double a, double b)
{
    if(b == 0){
        printf("Error! Division by zero\n");
        return 0;
    }else{
        return a /= b;
    }

}

int main()
{
    double num1, num2, result;
    int choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose the operation to perform: ");
    scanf("%d", &choice);

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if(choice == 1){
        result = add(num1, num2);
        printf("Result: %.1lf\n", result);
    }else if(choice == 2){
        result = subtract(num1, num2);
        printf("Result: %.1lf\n", result);
    }else if(choice == 3){
        result = multiply(num1, num2);
        printf("Result: %.1lf\n", result);
    }else if(choice == 4){
        result = divide(num1, num2);
        printf("Result: %.2lf\n", result);
    }else{
        printf("Invalid choice");
        return 1;
    }
    return 0;
}
