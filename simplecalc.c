// KAREMA HOWARD WANYEKI
// ENE212-0071/2021
#include <stdio.h>

int main() {
    double num1, num2, sum, difference;
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    difference = num1 - num2;

    printf("The sum of your two numbers is %lf\n", sum);
    printf("The difference of your two numbers is %lf\n", difference);

    printf("The sum and difference of the two numbers is %lf and %lf respectively\n", sum, difference);

    return 0;
}