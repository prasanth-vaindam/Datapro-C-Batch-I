#include<stdio.h>
#include<stdlib.h>
int main()
{
    int marks;
    system("clear");
    printf("enter your marks: ");
    scanf("%d",&marks);

    if(marks > 100 || marks < 0)
    {
        printf("Invalid Marks\n");
        return 0;
    }

    if(marks >= 90)
    {
        printf("You got A Grade\n");
    }
    else if(marks >= 80)
    {
        printf("You got B Grade\n");

    }
    else if(marks >= 70)
    {
        printf("You got C Grade\n");
    }
    else if(marks >= 60)
    {
        printf("You got D Grade\n");
    }
    else if(marks >= 50)
    {
        printf("You got E Grade\n");
    }
    else {
        printf("You got F grade\n");
    }
    return 0;
}