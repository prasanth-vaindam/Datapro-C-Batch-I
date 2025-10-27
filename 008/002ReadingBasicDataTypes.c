#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;
    double weight;

    // Input Section
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);  // Note the space before %c to ignore leftover newline

    printf("Enter your weight (in kg): ");
    scanf("%lf", &weight);

    // Output Section
    printf("\n--- Your Details ---\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);
    printf("Weight: %.2lf kg\n", weight);

    return 0;
}
