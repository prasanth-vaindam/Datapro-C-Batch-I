/*
You can control how many digits appear after the decimal using %.nf (n = number of digits).
*/
#include <stdio.h>

int main() {
    float pi = 3.1415926;
    printf("Default  : %f\n", pi);
    printf("2 digits : %.2f\n", pi);
    printf("4 digits : %.4f\n", pi);
    return 0;
}
