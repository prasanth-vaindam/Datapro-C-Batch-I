#include<stdio.h>
int main()
{
    int age = 10; // decimal or integer
    char grade = 'A'; // character
    float gpa = 3.75; // floating point number
    double largeNumber = 1234567890.123456; // double precision floating point number

    printf("Grade: %c\n", grade);
    printf("GPA: %.2f\n", gpa);
    printf("Age: %d years\n", age);
    printf("Large Number: %.6lf\n", largeNumber);
    return 0;    
}