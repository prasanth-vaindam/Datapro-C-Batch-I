#include<stdio.h>
int main()
{
    // program to read 3 numbers
    int age;
    char grade;
    float weight;
    printf("enter grade:");
    scanf("%c", &grade);
    printf("enter age: ");
    scanf("%d", &age);
   
    printf("Enter weight:");
    scanf("%f", &weight);

    printf("You entered: %d, %c, %f\n", age, grade, weight);
    return 0;
}
