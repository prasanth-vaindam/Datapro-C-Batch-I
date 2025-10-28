#include<stdio.h>
#include<stdlib.h>
int main(){
    int i = 0;
    int number = 0;
    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d", &number);
    unsigned long long factorial = 1;
    system("clear");

    for(i = number; i > 1; i--){
        factorial = factorial * i;
    }

    printf("The factorial of %d is: %llu\n", number, factorial);
    return 0;

}