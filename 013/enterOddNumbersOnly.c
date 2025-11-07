#include<stdio.h>
#include<string.h>
int main(){
	int number;
	do{
		printf("Enter any number: ");
		scanf("%d",&number);
		printf("You entered %d\n",number);
	}while((number % 2 == 0) == 0);
	return 0;
}
