#include<stdio.h>
int main()
{
	int number = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("%d", (number%2 == 0));
}
