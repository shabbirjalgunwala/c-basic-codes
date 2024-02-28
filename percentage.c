//program for calculating all marks and on the basis of marks calculating percentage
//And also providing result - Pass / fail if percentage are greater / less than 35
// Developed by -Shabbir   Dated- 28.12.23    Modified- 28.02.2024

#include<stdio.h>
int main()
{
	int sub1, sub2, sub3, sub4, sub5, sub6, sub7;
	float marks=0.0 ,percentage=0.0;
	
	//Taking 7 subjects marks from user
	printf("\n Enter the Marks of Subject BCA-101 :");
	scanf("%d",&sub1);
	
	printf("\n Enter the Marks of Subject BCA-102 :");
	scanf("%d",&sub2);
	
	printf("\n Enter the Marks of Subject BCA-103 :");
	scanf("%d",&sub3);
	
	printf("\n Enter the Marks of Subject BCA-104 :");
	scanf("%d",&sub4);
	
	printf("\n Enter the Marks of Subject BCA-105 :");
	scanf("%d",&sub5);
	
	printf("\n Enter the Marks of Subject BCA-106 :");
	scanf("%d",&sub6);
	
	printf("\n Enter the Marks of Subject BCA-107 :");
	scanf("%d",&sub7);
	
	
	//Sum of marks of all subject 
	marks = sub1 + sub2 + sub3 + sub4 + sub5 + sub6 + sub7 ;
	printf("\n Total Marks of All Subjects =%f",marks);
	
	
	//Calculation of percentage
	percentage = marks*100/700;
	printf("\n\n \t Percentage Gained =%f",percentage);
	
	if(percentage >= 35)
	{
		printf("\n\n\t Result = Pass");
	}
	else
	{
		printf("\n\n\t Result = Fail");
	}
	
	return 0;
}
