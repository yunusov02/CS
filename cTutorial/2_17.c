#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);


    printf("Sum of %d and %d:    %d\n", num1, num2, num1 + num2);
    printf("product of %d and %d:    %d\n", num1, num2, num1 * num2);
    printf("difference of %d and %d:    %d\n", num1, num2, num1 - num2);
    printf("division of %d and %d:    %d\n", num1, num2, num1 / num2);

    return 0;
}