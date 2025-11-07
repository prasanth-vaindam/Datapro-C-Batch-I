#include<stdio.h>
#include<stdlib.h>
int main(){
    int sum = 0;
    int number;
    int i;
    system("clear");
    for(i = 0; i < 5; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);
        sum += number;
    }
    printf("The sum of the 5 numbers is: %d\n", sum);
    return 0;
}