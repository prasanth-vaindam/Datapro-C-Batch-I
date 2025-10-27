#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check if it is even or odd:");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    else if (num %2 ==1){
        printf("%d is Odd\n", num);
    }else {
        printf("it is invalid input\n");
    }

    return 0;
}