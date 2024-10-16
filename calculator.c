#include <stdio.h>
#include <math.h>

int main()
{
    float first, second;
    char operator;
    printf("Enter the first number: ");
    scanf("%f", &first);

    printf("Enter a operator(+,-,*,/,s): ");
    scanf(" %c", &operator);

    if (operator== '+')
    {
        printf("Enter the second number: ");
        scanf("%f", &second);
        printf("Result: %.4f\n", first + second);
    }
    else if (operator== '-') //Subtraction of two numbers
    {
        printf("Enter the second number: "); 
        scanf("%f", &second);
        printf("Result: %.4f\n", first - second);
    }
    else if (operator== '*') //Multiplication of two numbers
    {
        printf("Enter the second number: ");
        scanf("%f", &second);
        printf("Result: %.4f\n", first * second);
    }
    else if (operator== '/') //Division of two numbers
    {
        printf("Enter the second number: ");
        scanf("%f", &second);
        if (second != 0) //denominator can't be zero
        {
            printf("Result: %.4f\n", first / second);
        }
        else
        {
            printf("ERROR! Division by zero...");
        }
    }
    else if (operator== 's') //s is for sqrt of a number
    {
        if(first>0){
            printf("Result: %.4f", sqrt(first)); // the number should not be negative
        }
        else{
            printf("Sqrt of a negative number is not allowed");
        }
    }
    else
    {
        printf("INVALID INPUT!!! >>> Enter an operator like +,-,*,/,s"); //for invalid inputs
    }
    system("pause");
    return 0;
}