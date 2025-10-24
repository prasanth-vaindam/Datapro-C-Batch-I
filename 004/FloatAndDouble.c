// Program to demonstrate float and double data types in C and their precision

#include <stdio.h>
int main()
{
    int numerator = 10;
    int denominator = 3;
    float floatResult;
    double doubleResult;
    floatResult = (float)numerator / denominator; // Type casting to float for precise division
    doubleResult = (double)numerator / denominator; // Type casting to double for more precision

    printf("floatresult of %d / %d is %f\n", numerator, denominator, floatResult);
    printf("floatresult of %d / %d is %lf\n", numerator, denominator, floatResult);
    printf("doubleresult of %d / %d is %lf\n", numerator, denominator, doubleResult);
    printf("doubleresult of %d / %d is %f\n", numerator, denominator, doubleResult);
    printf("floatresult of %d / %d is %.12f\n", numerator, denominator, floatResult);
    printf("doubleresult of %d / %d is %.12f\n", numerator, denominator, doubleResult);
    printf("doubleresult of %d / %d is %.12f\n", numerator, denominator, doubleResult);
    return 0;
}