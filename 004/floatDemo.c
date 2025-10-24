#include<stdio.h>
main()
{
    float num1 = 5.75f;      // 'f' suffix indicates a float literal
    double num2 = 19.99;     // double literal by default

    printf("Value of float num1: %f\n", num1);
    printf("Value of double num2: %lf\n", num2);

    // Demonstrating precision
    float floatPrecision = 1.123456789f;
    double doublePrecision = 1.123456789123456;

    printf("Float precision: %.9f\n", floatPrecision);   // Displaying up to 9 decimal places
    printf("Double precision: %.15lf\n", doublePrecision); // Displaying up to 15 decimal places

    return 0;
}