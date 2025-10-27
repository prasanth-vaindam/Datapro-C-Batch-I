#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number to check it's Sign: ");
    scanf("%d", &number);
    if(number > 0)
    {
        printf("the Number %d is Positve", number);
    }
    else if (number < 0)
    {
        printf("the Number %d is Negative", number);        
    }
    else {
        printf("the Number %d is Zero\n", number);
    }
    return 0;
}