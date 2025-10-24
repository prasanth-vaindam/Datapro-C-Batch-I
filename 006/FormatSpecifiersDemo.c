#include <stdio.h>

int main() {
    int age = 19;
    float height = 6.6;
    char initial = 'K';
    char name[] = "Aryan";

    printf("My name is %s, and my initial is %c.\n\n", name, initial);
    printf("I am %d years old and %.1f feet tall.\n\n\n", age, height);

    return 0;
}

/*
Explanation:
In the first printf() statement, %s is used to print the string stored in name, and %c is used to print the character stored in initial.

In the second printf() statement, %d is used to print the integer value of age, and %.1f is used to print the float value of height with one digit after the decimal point. The . followed by a number specifies precision for floating-point numbers.
*/