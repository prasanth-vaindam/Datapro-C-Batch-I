#include<stdio.h>
int main()
{
	int i = 5;
	i++;
	printf("%d\n",i); //6
	i++;
	printf("%d\n",i); //7
	
	++i;
	printf("%d\n",i); //8 
	
	printf("%d\n", i++); //8
	printf("%d\n", i); //9
	
	++i;
	printf("%d\n", i); //10
	printf("%d\n", i++); // 10
	printf("%d\n",i);   // 11
	printf("%d\n", ++i); //12
	printf("%d\n",i++); // 13
	printf("%d\n",++i);// 14
	
}
