#include<stdio.h>
#include<string.h>
struct Student{
	
	int roll_no;
	char name[10];
	float per;
	
};
int main(){
	
	struct Student S1;
	
	printf("Enter your Roll Number: ");
	scanf("%d",&S1.roll_no);
	
	printf("Enter your Name: ");
	gets(S1.name);
	gets(S1.name);
	
	printf("Enter your Percentage: ");
	scanf("%f",&S1.per);
	
	printf("\n\nEntered Name is: %s",S1.name);
	printf("\nEntered Roll Number is: %d",S1.roll_no);
	printf("\nEntered Percentage is: %f",S1.per);	

	return 0;
}

/*
OUTPUT:

Enter your Roll Number: 10
Enter your Name: jk jk
Enter your Percentage: 8.23


Entered Name is: jk jk
Entered Roll Number is: 10
Entered Percentage is: 8.230000

*/
