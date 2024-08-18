#include<stdio.h>
#include<string.h>

struct Student{
	
	int roll_no=23;
	char name[10]="Arjun";
	float per=78.23;
	
};

int main(){
	
	struct Student S1;
	
	printf("\n\nEntered Name is: %s",S1.name);
	printf("\nEntered Roll Number is: %d",S1.roll_no);
	printf("\nEntered Percentage is: %f",S1.per);	

	return 0;
}

/*
OUTPUT:

Entered Name is: Arjun
Entered Roll Number is: 23
Entered Percentage is: 78.23

*/
