#include <stdio.h>

int main(){
    char operator;
    double number1;
    double number2;
    double result;
    
    printf("\nEnter an operator: ");
    scanf("%c", &operator);
    printf("Enter number 1: ");
    scanf("%lf", &number1);
    printf("Enter number 2: ");
    scanf("%lf", &number2);

    switch (operator) {
        case '+':
            result = number1 + number2;
            printf("\nresult: %.2lf\n", result);
            break;

        case '-':
            result = number1 - number2;
            printf("\nresult: %.2lf\n", result);
            break;

        case '*':
            result = number1 * number2;
            printf("\nresult: %.2lf\n", result);
            break;

        case '/':
            result = number1 / number2;
            printf("\nresult: %.2lf\n", result);
            break;

        default:
            printf("%c is not valid\n", operator);
    }

}