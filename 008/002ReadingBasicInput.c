#include <stdio.h>

int main() {
    int age;
    float salary;
    char grade;
    double pi;

    printf("Enter your age: ");
    scanf("%d", &age);         // & gives address of 'age'

    printf("Enter your salary: ");
    scanf("%f", &salary);      // & gives address of 'salary'

    printf("Enter your grade: ");
    scanf(" %c", &grade);      // Space before %c to ignore leftover newline

    printf("Enter value of pi: ");
    scanf("%lf", &pi);         // %lf for double

    printf("\n--- Output ---\n");
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Grade: %c\n", grade);
    printf("Pi: %.5lf\n", pi);

    return 0;
}
