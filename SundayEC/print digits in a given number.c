// Program to print digits in a given number
#include <stdio.h>
int main() {
    int number, digit;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop to extract and print each digit
    while (number > 0) {
        digit = number % 10; // Get the last digit
        printf("%d\n", digit); // Print the digit
        number = number / 10; // Remove the last digit from the number
    }

    return 0;
}