#include<stdio.h>
#include<stdlib.h>
int main()
{
    int day;
    system("clear");
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch(day)
    {
        default:
            printf("Invalid day number\n");
            break;
        case 5:
        case 12:
        case 19:
        case 26:
            printf("Sunday\n");
            break;
            
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("The 3rd day in the week is Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 30:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        
    }
    return 0;
}