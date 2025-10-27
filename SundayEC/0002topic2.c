#include<stdio.h>
#include<stdlib.h> // Include standard library for system calls
int main() {

    int n, i = 1; // Initialize n and i

    system("clear"); // Clear the console screen
    printf("Enter a number: "); // Prompt user for input
    scanf("%d", &n); // Read the input number

    // printf("%d\n", n/10);
    // printf("reminder or last digit in the given number %d is %d\n", n, n%10);

    int reverse = 0; // Initialize reverse to 0
    int reminder = 0; // Initialize reminder to 0
    // Loop to extract and print each digit
    while(n>0){
        reminder = n%10;
        reverse = reverse * 10 + reminder; // Build the reverse number
               
        n = n / 10; // Remove the last digit from n
    }
    printf("Reverse of the given number is: %d\n", reverse); // Print the reversed number
    return 0; // Return success
}