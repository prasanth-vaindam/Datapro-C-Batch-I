#include<stdio.h>
int main(){
	int i = 1;
	while(i <= 5){
		printf("%d ",i++); // 1 2 3 4 5
	}
	
	int j =1;
	while(j <= 5){
		printf("%d ", ++j); // 2 3 4 5 6  
	}
}
