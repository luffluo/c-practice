//
// Created by Luff on 2020/8/9.
//

// A simple calculator.

#include <stdio.h>

#define OPERATOR_SIZE 5

int in_array(char value, char array[]);

int main(void)
{
    double num1 = 0.0;
    double num2 = 0.0;
    char operation;
    char operators[OPERATOR_SIZE] = {'+', '-', '*', '/', '%'};

    printf("Enter the calculation: \n");
    scanf("%lf%c%lf", &num1, &operation, &num2);

    if (!in_array(operation, operators)) {
        puts("请输入正确的运输符: [+ - * / %]");
    }

    switch (operation) {
        case '+':
            printf(" = %.2lf\n", num1 + num2);
            break;

        case '-':
            printf(" = %.2lf\n", num1 - num2);
            break;

        case '*':
            printf(" = %.2lf\n", num1 * num2);
            break;

        case '/':
            if (0 == num2)
                printf("\n\n\aDavision by zero error!\n");

            printf(" = %.2lf\n", num1 / num2);
            break;

        case '%':
            if (0 == (long) num2)
                printf("\n\n\aDavision by zero error!\n");

            printf(" = %ld\n", (long) num1 % (long) num2);
            break;

        default:
            printf("\n\n\aDavision by zero error!\n");
            break;
    }

    return 0;
}

int in_array(char value, char array[])
{
    for (int i = 0; i < OPERATOR_SIZE; i++) {
        if (array[i] == value)
            return 1;
    }

    return 0;
}