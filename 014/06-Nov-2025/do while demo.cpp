#include<stdio.h>
int main()
{
	int i = 0;
	do{
		printf("%d ",i); // 0 1 2 3 4 
		i++;
	}while(i<5);
	// second code ----------------------
	int j = 10;
	do{
		printf("\n%d ",j); // 10
		j++;
	}while(j<5);
	printf("\n%d\n", j); // 11
}
