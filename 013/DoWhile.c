#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	do{
		printf("Enter a name: ");
		scanf("%s",name);
		printf("You entered %s\n",name);
	}while(name!=stop);
	return 0;
}
