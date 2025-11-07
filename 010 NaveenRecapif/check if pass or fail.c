// Program to to check if the student passed in the exam
// Pass marks is 35
#include<stdio.h>
int main()
{
	int mathsMarks;
	printf("Enter your marks in Maths Exam: ");
	scanf("%d", &mathsMarks);
	
	if(mathsMarks >= 35){
		printf("You Passed in Maths Exam\n");
	}else {
		printf("You failed in the Maths Exam\n");
	}
	return 0;
}
