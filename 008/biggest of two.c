#include<stdio.h>
int main()

{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a > b)
    {
        printf("The biggest number is: %d\n", a);
    }
    else
    {
        printf("The biggest number is: %d\n", b);
    }
    return 0;
}